#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_isspace(char c)
{
	return (c == ' ' || c == '\t');
}

char ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

void rstr_capitalize(char *s)
{
	int indx;

	indx = -1;
	while (s[++indx])
	{
		if (ft_isupper(s[indx]))
				s[indx] += 32;
		if(ft_islower(s[indx]) && (ft_isspace((s[indx + 1])) || !s[indx + 1])) 
			s[indx] -= 32;
		ft_putchar(s[indx]);	
	} 
	ft_putchar('\n');	
}
int main(int ac, char **av)
{
	if (ac <= 1)
	{
		write(1, "\n", 1);		
		return (1);
	} 
	av++;
	while (*av)
	{
		rstr_capitalize(*av);
		++av;
	}
	return (0);
}

