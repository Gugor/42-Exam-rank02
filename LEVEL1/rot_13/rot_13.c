#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char rot(char c)
{
	if(c >= 'a' && c <='z') 
		return ((c - 'a' + 13) % 26 + 'a');
	if(c >= 'A' && c <= 'Z')
		return ((c - 'A' + 13) % 26 + 'A');
	return (c);	
}
int main(int ac, char **av)
{
	int indx;

	if (ac != 2)
	{
		ft_putchar('\n');	
		return (1);
	}
	
	indx = -1;
	while (av[1][++indx])
		ft_putchar(rot(av[1][indx]));
	ft_putchar('\n');	
	return (0);
}
