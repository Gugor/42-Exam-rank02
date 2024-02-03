int main (int ac, char **av)
{
    int i;

    if (ac != 4)
    {
        write(1, "\n", 1);
        return (1);
    }
    if (av[2][1] || av[3][1])
    {
        write(1, "\n", 1);
        return (1);
    }
    i = 0;
    while (av[1][i] && av[1][i] != av[2][0])
        i++;
    if (i < 1 && av[1][i] != av[2][0])
    {
        write(1, "\n", 1);
        return (1);
    }
    i = -1;
    while (av[1][++i])
    {
        if (av[1][i] == av[2][0])
            write(1, &av[3][0], 1);
        else
            write(1, &av[1][i], 1);
    }
    write(1, "\n", 1);
    return (0);
}
