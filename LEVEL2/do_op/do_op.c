#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int num;
	int is_neg;

	num = 0;
	is_neg = 0;
	if (*str == '-')
	{
		is_neg = 1;
		str++;
	}
	while (*str && (*str >= '0' && *str <='9'))
	{
		num *= 10;
		num += (*str - '0');
		str++;
	}
	if (is_neg)
		return (-num);
	else
		return (num);
}

void ft_putnbr(int nb)
{
	char mod;

	mod = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		mod = (nb % 10) + 48;
		ft_putnbr(nb / 10);
		write(1, &mod, 1);
	}
	else
	{
		mod = (nb % 10) + 48;
		write(1, &mod, 1);
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	int num1;
	int num2;

	num1 = ft_atoi(av[1]);
	num2 = ft_atoi(av[3]);
	switch(av[2][0])
	{
		case '+':
			ft_putnbr(num1 + num2);
			break ;
		case '-':
			ft_putnbr(num1 - num2);
			break ;
		case '*':
			ft_putnbr(num1 * num2);
			break ;
		case '/':
			ft_putnbr(num1 / num2);
			break ;
		case '%':
			ft_putnbr(num1 % num2);
			break ;
	}
	write(1, "\n", 1);
}

