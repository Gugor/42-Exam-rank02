#include <unistd.h>

 void ft_putchar(char c)
 {
     write(1, &c, 1);
 }


 char mirror(char c)
 {
     char *alpha = "abcdefghijklmnopqrstuvwxyz";
     char *alphA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

     if (c >= 'a' && c <= 'z')
         return (alpha[25 - (c - 'a')]);
     if (c >= 'A' && c <= 'Z')
         return (alphA[25 - (c - 'A')]);
     return (c);
 }

 int main(int ac, char **av)
 {
     int indx;
     if (ac != 2)
     {
         ft_putchar('\n');
         return (1);
     }
     indx = -1;
     while (av[1][++indx])
         ft_putchar(mirror(av[1][indx]));
     ft_putchar('\n');
     return (0);
 }
