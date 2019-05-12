#include<stdio.h>
int main()
{
   int n,num,m;
   while(~scanf("%d",&n))
   {
	   num = 0;
	   for(int i = 0;i<n;i++)
	   {
		   scanf("%d",&m);
		   if(m>=100){ num+=(m/100);m = m%100;}
		   if(m>=50) { num++;m -= 50;}
		   if(m>=40) { num++;m -= 10;}
		   if(m>=30) { num++;m -= 10;}
		   if(m>=20) { num++;m -= 10;}
		   if(m>=10) { num++;m -= 10;}
		   if(m>=5)  { num++;m -= 5; }
		   if(m>=4)  { num++;m -= 2; }
		   if(m>=2)  { num++;m -= 2; }
		   if(m>=1)  { num++;m -= 1; }
	   }
	   if(n)printf("%d\n",num);
   }
   return 0;
}