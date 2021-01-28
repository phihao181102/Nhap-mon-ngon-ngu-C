#include <stdio.h>
 int main(){
   int n, sum = 0;
   printf ("nhap so nguyen duong n bat ky = ");
   scanf ("%d", &n);
   
   for (int i = 0; i < n; i++){
       sum = sum + i+1;
   }

     printf (" tong = %d ", sum);
   return 0;
   }
