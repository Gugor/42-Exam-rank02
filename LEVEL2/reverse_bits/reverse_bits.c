unsigned char	reverse_bits(unsigned char octet)
{
	int bit;
	unsigned char reversed; 

	bit = 9;
	reversed = '\0';

	while(--bit)
		reverse |= octect >> (7 - bit);
	return (reverse);
}
