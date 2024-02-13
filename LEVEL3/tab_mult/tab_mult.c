#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int ft_atoi(char *s)
{
	unsigned int nb;

	nb = 0;
	while (*s)
	{
		nb = (nb * 10) + (*s - 48);
		++s;
	}
	return (nb);
}

void ft_putnbr(unsigned int nb)
{
	char mod;

	if (nb >= 10)
	{
		mod = (nb % 10) + 48;
		ft_putnbr(nb/10);
		write(1, &mod, 1);
	}
	else
	{
		mod = (nb % 10) + 48;
		write(1, &mod, 1);
	}
}

int main (int ac, char **av)
{
	unsigned int mult;
	unsigned int i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	
	mult = ft_atoi(av[1]);
	i = 0;
	while (++i < 10)
	{
		ft_putnbr(i);
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_putnbr(mult);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		ft_putnbr(i * mult);
		ft_putchar('\n');
	}
	return (0);
}

