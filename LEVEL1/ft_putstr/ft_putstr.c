#include <unistd.h>

void ft_rputstr(char *str)
{
	if (*str == '\0')
		return ;
	write(1, str, 1);
	ft_rputstr(++str);
}

void ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_putstr(av[1]);
	ft_putstr("\n");
	ft_rputstr(av[1]);
}
