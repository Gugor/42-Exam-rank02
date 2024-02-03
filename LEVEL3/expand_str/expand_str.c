#include <unistd.h>

int main(int ac, char **av)
{
	unsigned char *str;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (1);
	}

	int sp;
	int len;
	int i;

	str = (unsigned char *)av[1];
	len = 0;
	i = 0;
	while (str[len])
		len++;
	while (str[i] == 32)
		i++;
	while (str[--len] == 32)
		if (str[len] > 32 && str[len] <= 127)
			break ;
	while (str[i] && i <= len)
	{
		if (str[i] == 32)
		{
			while (str[i] == 32)
				i++;
			sp = 4;
			while (--sp)
				write(1, " ",1);
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
