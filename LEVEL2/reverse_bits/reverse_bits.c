unsigned char	reverse_bits(unsigned char octet)
{
	int bits;
	unsigned char reverse; 

	bits = -1;
	reverse = '\0';

	while(++bits < 8)
	{
		reverse |= (octet >> bits) & 1;
		if (bits < (8 - 1))
			reverse <<= 1;
	}
	return (reverse);
}

#include <stdio.h>
int main (void)
{
	unsigned char	octet;
	int	bits;
	int	bit;

	octet	= 9,
	bits	= sizeof(octet) * 8;
	bit		= 0;
	printf(":: Original:\n");
	while (--bits >= 0)
	{
		bit = ((octet >> bits) & 1) ? 1 : 0;
		if (bits % 4 == (4 - 1))
			printf(" ");
		printf("%d",bit);
	}
	printf("\n:: Reversed:\n");
	octet = reverse_bits(octet);
	bits	= sizeof(octet) * 8;
	while (--bits >= 0)
	{
		bit = ((octet >> bits) & 1) ? 1 : 0;
		if (bits % 4 == (4 - 1))
			printf(" ");
		printf("%d",bit);
	}
		
}
