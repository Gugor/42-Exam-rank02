#include <unistd.h>

int ft_strchr(char *str, char c)
{
	int i;

	i = -1;
	while(*(str + ++i))
		if(*(str + i) == c)
			return (1);
	return(0);
}

int main(int ac, char **av)
{
	int i;
	int j;
	if (ac != 3)
		return (0);
	
	i = -1;
	while (av[1][++i])
	{
		j = 0;
		while(j < i && av[1][j] != av[1][i])
			++j;
		if (i == j)
			write(1, &av[1][i], 1);
	}
	i = -1;
	while (av[2][++i])
	{
		j = 0;
		while(j < i && av[2][j] != av[2][i] )
			++j;
		if (i == j && !ft_strchr(av[1],av[2][i]))
			write(1, &av[2][i], 1);
	}
	write(1, "\n" , 1);
	return (0);
}
