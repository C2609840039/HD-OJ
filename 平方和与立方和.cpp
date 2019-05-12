#include<stdio.h>
int main()
{
   int a,b,c;
   double sumx,sumy;
   while(~scanf("%d%d",&a,&b))
   {
     if(a>b)
     {
       c=a;a=b;b=c;
     }
     sumx = 0; sumy = 0;
     for(;a<=b;a++)
     {
       if(a%2)
       {
         sumy += a*a*a;
       }
       else 
       {
         sumx += a*a;
       }
     }
     printf("%.0lf %.0lf\n",sumx,sumy);
   }
   return 0;
}