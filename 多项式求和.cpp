#include<stdio.h>
int main()
{
   int k;
   int m,n;
   float sum;
   scanf("%d",&m);
   for(int i = 0; i < m; i++)
   {
	   k = 1;
	   sum = 0;
	   scanf("%d",&n);
	   for(float j = 1; j<=n; j++)
       {
           sum += k/j;
		   k = - k;
	   }
	   printf("%.2lf\n",sum);
   }
   return 0;
}