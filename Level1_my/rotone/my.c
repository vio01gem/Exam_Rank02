#include <unistd.h>

void	rotone(char *s)
{
    int i;
    i = 0;
    while (s[i])
    {
        if ((s[i] >= 'a' && s[i] <= 'y'))
            s[i] += 1;
        else if (s[i] >= 'A' && s[i] <= 'Y')
            s[i] += 1;
        else if(s[i] == 'z' || s[i] == 'Z') 
            s[i] -= 25;
        write(1, &s[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main ()
{
    char s[] = "AkjhZ zLKIJz , 23y";
    rotone(s);
}