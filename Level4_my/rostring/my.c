#include <unistd.h>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 0;
        int start, end;
        int first_word = 1;

        // Skip leading spaces
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i++;
        
        // Store the first word
        start = i;
        while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
            i++;
        end = i - 1; // Marks the end of the first word
        
        // Skip spaces after first word
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i++;

        // Print the rest of the words
        while (av[1][i])
        {
            // Skip spaces before a word
            while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
                i++;

            // Print the word
            if (av[1][i])
            {
                if (!first_word)
                    write(1, " ", 1);
                first_word = 0;
            }

            while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
            {
                write(1, &av[1][i], 1);
                i++;
            }
        }

        // Print the first word at the end (if it exists)
        if (!first_word) // Print space before the first word (if needed)
            write(1, " ", 1);
    
        while (start <= end)
        {
            write(1, &av[1][start], 1);
            start++;  // Move to the next character
        }
    
    }
    write(1, "\n", 1);
}
