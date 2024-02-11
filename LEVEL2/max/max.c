int     max(int* tab, unsigned int len)
 {
     int indx;
     int max;

     if (!tab || len == 0)
         return (0);
     indx = -1;
     max = tab[0];
     while (++indx < len)
     {
         if (max < tab[indx])
             max = tab[indx];
     }
     return (max);
 }
