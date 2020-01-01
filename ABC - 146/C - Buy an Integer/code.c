#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   long int A, B, X;
   scanf("%ld%ld%ld", &A, &B, &X);
   
   long int l, h, m;
   l = 1;
   h = 1000000000;
   long int ans;
   
   while(h>=l) {
       m = (l+h)/2;
       int d = log10(m) + 1;
       long int cal;
       cal = (A*m) + (B*d);
       
       if(cal<=X) {
           ans = m;
           l = m+1;
           
       }
       else {
           h = m - 1;
       }
    
   }
   
   printf("%ld", ans);
    return 0;
}