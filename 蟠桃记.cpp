#include<stdio.h>
#include<math.h>
int main()
{
   int n;
   double m;
   while(~scanf("%d",&n))
   {
	   m=1;
	   n--;
	   for(;n>0;n--) m = (m+1)*2;
	   printf("%.0lf\n",m);
   }
   return 0;
}