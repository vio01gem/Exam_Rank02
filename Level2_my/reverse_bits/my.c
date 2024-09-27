
#include <stdio.h>
char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char rev = 0;
    while (i > 0)
    {
        rev = rev * 2 + (octet % 2);
        octet = octet / 2;
        i--;
    }
    return (rev);
}

int main ()
{
    unsigned char reversed = reverse_bits(5);
    printf("%d\n", reversed);
}


// Example with octet = 5 (binary: 0000 0101)

// 8) rev = 0 * 2 + (5 % 2)  | rev = 1 (0000 0001)
//    octet = 5 / 2           | octet = 2 (0000 0010)

// 7) rev = 1 * 2 + (2 % 2)  | rev = 2 (0000 0010)
//    octet = 2 / 2           | octet = 1 (0000 0001)

// 6) rev = 2 * 2 + (1 % 2)  | rev = 5 (0000 0101)
//    octet = 1 / 2           | octet = 0 (0000 0000)

// 5) rev = 5 * 2 + (0 % 2)  | rev = 10 (0000 1010)
//    octet = 0 / 2           | octet = 0 (0000 0000)

// 4) rev = 10 * 2 + (0 % 2) | rev = 20 (0001 0100)
//    octet = 0 / 2           | octet = 0 (0000 0000)

// 3) rev = 20 * 2 + (0 % 2) | rev = 40 (0010 1000)
//    octet = 0 / 2           | octet = 0 (0000 0000)

// 2) rev = 40 * 2 + (0 % 2) | rev = 80 (0101 0000)
//    octet = 0 / 2           | octet = 0 (0000 0000)

// 1) rev = 80 * 2 + (0 % 2) | rev = 160 (1010 0000)
//    octet = 0 / 2           | octet = 0 (0000 0000)
