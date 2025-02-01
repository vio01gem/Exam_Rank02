#include <unistd.h>

void putnbr(int num)
{
    char digits[] = "0123456789";
    if (num >= 10)
        putnbr(num/10);
    write (1, &digits[num % 10], 1);
}

int main ()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write (1, "fizz", 4);
        else if (i % 5 == 0)
            write (1, "buzz", 4);
        else 
            putnbr(i);
        i++;
        write (1, "\n", 1);
    }
}