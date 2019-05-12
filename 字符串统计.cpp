#include<stdio.h>
#define N 10000
int main()
{
   int n;
   int num;
   char a[N];
   while(~scanf("%d",&n))
   {
	   getchar();
	   for(;n;n--)
	   {
		   num = 0;  
		   gets(a);
		   for(int i = 0;a[i];i++) if(a[i]>=48&&a[i]<=57) num++;
		   printf("%d\n",num);
	   }
   }
   return 0;
}