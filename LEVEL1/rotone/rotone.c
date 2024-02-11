#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac != 2)
    {
		ft_putchar('\n');
		return (1);
	}
	char *str;

	str = av[1];
	while (*str)
	{
		if ((*str >= 'a' && *str < 'z') || (*str >= 'A' && *str < 'Z'))
			ft_putchar(*str + 1);
		else if (*str == 'z' || *str == 'Z')
			ft_putchar(*str - 25);
		else
			ft_putchar(*str);
		++str;
	}
     ft_putchar('\n');
     return (0);
 }
