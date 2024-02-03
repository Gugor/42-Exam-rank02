#include <unistd.h>


void epur_str(char *str, int b)
{
	static int first_space = 0;
	if(!*str)
		return ;
	if (*str && (*str == ' ' || *str == '\t'))
		epur_str(str + 1, 1);
	if (*str && (*str > 32 && *str < 127))
	{
		if (b && first_space)
			write(1, " ", 1);
		first_space = 1;
		write(1, str, 1);
		epur_str(str + 1, 0);
	}
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        write(1, "\n",1 );
        return (1);
    }
	epur_str(av[1], 0);
    return (0);
}
