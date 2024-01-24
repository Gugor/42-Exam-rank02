#include <stdio.h>

void print_l2r_bits(unsigned char octet)
{
	int bits;
	int bit;

	bits = -1;
	bit = 0;
	while (++bits < 8 )
	{
		if (bits % 4 == 0)
			printf(" ");
		bit = ((octet >> (7 - bits)) & 1)? 1 : 0; 
		printf("%d", bit);
	} 	
	printf(" <=\n");
}

void print_r2l_bits(unsigned char octet)
{
	int bits;
	int bit;

	bits = -1;
	bit = 0;
	printf("=>");
	while (++bits < 8 )
	{
		if (bits % 4 == 0)
			printf(" ");
		bit = ((octet >> bits) & 1)? 1 : 0; 
		printf("%d", bit);
	} 	
	printf("\n");
}

int main (void)
{
	printf(":: R2L Byte (%i)\n", (int)*("	"));
	print_r2l_bits('	');
	printf(":: L2R Byte (%i)\n", (int)*("	"));
	print_l2r_bits('	');

}
