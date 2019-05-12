#include<stdio.h>
int main()
{
   int n,m;
   int a=2;
   int sum;
   while(~scanf("%d%d",&n,&m))
   {
	   int i;
	   a=2; sum=0; 
	   for( i = 1; i <= (n-n%m); i++)
	   {
			sum += a;
			a += 2;
			if(i%m==0)
			{
				if(i!=m)printf(" ");
				printf("%d",sum/m);
				sum = 0;
			}
	   }
	   if(n%m)
	   {
		   sum = 0;
		   for(;i<=n;i++)
		   {
				sum  += a;
				a += 2;
		   }
		   printf(" %d",sum/(n%m));
	   }
	   printf("\n");
   }
   return 0;
}