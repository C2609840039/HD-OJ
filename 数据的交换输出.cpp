#include<stdio.h>
int main()
{
   int n;
   int min,a[101]={};
   while(~scanf("%d",&n))
   {
	   min = 0;
	   for(int i = 0;i < n;i++)
	   {
			scanf("%d",&a[i]);
			if(a[i]<a[min])min = i;
	   }
	   a[101] = a[0]; a[0] = a[min]; a[min] = a[101];
	   for(int i = 0;i < n;i++)
	   {
		   if(i!=0)printf(" ");
		   printf("%d",a[i]);
	   }
	   if(n!=0)printf("\n");
   }
   return 0;
}