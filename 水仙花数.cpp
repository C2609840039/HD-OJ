#include<stdio.h>
int main()
{
   int m,n;
   int sum,t,l;
   while(~scanf("%d%d",&m,&n))
   {
	   l = 0;
	   for(;m<=n;m++)
       {
           sum = 0;
           t = m;
           for(int i=0;i<3;i++)
           {
             sum += (t%10)*(t%10)*(t%10);
             t = t/10;
           }
           if(sum==m)
	       {
	  		  if(l!=0)printf(" ");
			  printf("%d",m);
			  l++;
		   }
	   }
       if(l==0)printf("no\n");
	   else printf("\n");
   }
   return 0;
}