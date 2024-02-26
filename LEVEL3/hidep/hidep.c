#include <unistd.h>

 int main(int ac, char **av)
 {
     if (ac != 3)
     {
         write(1, "\n", 1);
         return (1);
     }
     int indx1;
     int indx2;
     int lastindx;
     int exist;

     indx1 = -1;
     indx2 = -1;
     exist = 0;
     while (av[1][++indx1])
     {
         while (av[2][++indx2] && av[1][indx1] != av[2][indx2])
             ;;
         if(!av[2][indx2] && av[1][indx1])
         {
             write(1, "0\n",2);
             return (0);
         }
         if(av[1][indx1] == av[2][indx2])
             exist++;
     }
     indx1 = -1;
     while (av[1][++indx1])
         ;;
     if (exist == indx1)
     {
         write(1, "1\n", 2);
         return (0);
     }
     else
     {
         write(1, "0\n", 2);
         return (0);
     }
     return (0);
 }
