#include <unistd.h>
#include <stdio.h>

void print_bits(unsigned char octet)
{
    int bit;
    int bits;

    bit = 8;
    bits = 0;
    while (--bit >= 0)
    {
        bits = ((octet >> bit) & 1) ? 1 : 0;
        printf("%d",bits);
    }
    printf("\n");
}

unsigned char   swap_bits(unsigned char octet)
{
    unsigned char tmp;

    tmp = octet;
    octet <<= 4;
    tmp >>= 4;
    octet |= tmp;
    return (octet);
}

int main(int ac, char **av)
{
    if ( ac != 2)
    {
        write(1, "\n", 1);
        return (1);
    }

    unsigned char  octet;

    octet = av[1][0];
    printf(":: Char is:\n");
    print_bits(octet);
    write(1, "\n" , 1);
    printf(":: Swaped char is:\n");
    octet = swap_bits(octet);
    print_bits(octet);
    write(1, "\n" , 1);

}
