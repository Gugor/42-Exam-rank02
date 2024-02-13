#include <stdlib.h>

//#include <stdio.h>
char	*ft_itoa(int nbr)
{
	int size;
	int tmp;
	int neg;
	char *itoa;

	neg = 0;
	if(nbr < 0)
	{
		neg = 1;
		nbr *= -1;
		size++;
	}
	tmp = nbr;
	while (tmp > 0)
	{
		tmp /= 10;
		size++;
	}
	itoa = (char *)malloc((size + 1) * sizeof(char));
	if (!itoa)
		return (NULL);
	if (nbr == 0)
	{
		itoa[size + 1] = '\0';
		itoa[0] = '0';
		return (itoa);
	}

	while (nbr != 0)
	{
			itoa[--size] = (nbr % 10) + '0'; 
			nbr /= 10;
	}
	if(neg)
		itoa[0] = '-';
	return (itoa);
}
/*
int main(int ac, char **av)
{
	char *itoa;
	if (ac != 2)
		return (1);
	

	itoa = ft_itoa(atoi(av[1])); 
	printf("%s\n", itoa);

	if (itoa)
		free(itoa);
	return (0);
}*/
