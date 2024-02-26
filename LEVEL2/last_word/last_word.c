#include <unistd.h>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        write(1, "\n",1);
        return (1);
    }
    int len;
    int pos;

	len = -1;
	if (!av[1][0])
	{
        write(1, "\n",1);
        return (1);
    }
    while(av[1][++len])
        ;;
    while(av[1][--len] && (av[1][len] == ' ' || av[1][len] == '\t'))
        ;;
    pos = len -1;
    while (--pos)
        if (av[1][pos] == ' ' || av[1][pos] == '\t')
            break ;
    while (++pos <= len)
        write(1, &av[1][pos], 1);
    write(1, "\n",1);
}
