int main(int ac, char **av)
{
    int indx;
    int is_eow;
    if (ac != 2)
    {
        write(1, "\n",1 );
        return (1);
    }

    indx = 0;
    while(av[1][indx] && (av[1][indx] == ' ' || av[1][indx] == '\t' || av[1][indx] == '\n'))
        indx++;
    while (av[1][indx])
    {
        if (av[1][indx] == ' ' || av[1][indx] == '\t' || av[1][indx] == '\n')
            is_eow = 1;
        if (av[1][indx] > 32 && av[1][indx] < 127)
        {
            if (is_eow)
                write(1, " ", 1);
            is_eow = 0;
            write(1, &av[1][indx], 1);
        }
        indx++;
    }
    write(1, "\n",1 );
    return (0);

