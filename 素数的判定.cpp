#include<stdio.h>
#include<math.h>
int main()
{
   int x,y;
   int a,l;
   while(~scanf("%d%d",&x,&y))
   {
	   if(x!=0||y!=0)
	   {
		    if(x>y){ int p; p=x; x=y; y=p; }
			for(; x <= y; x++)
			{
				a = x*x+x+41;
				if(a>3)
				{
					for(l = 2; l<a;l++)
					{
						if(a%l==0)break;
					}
					if(l!=a)break;
				}
			}
			if((x-1)==y)printf("OK\n");
			else printf("Sorry\n");
	   }
   }
   return 0;
}