#include<stdio.h>
int num(int m)
{
	switch (m)
	{
		case 1:return 1;break;
		case 2:return 2;break;
		case 3:return 3;break;
		default: return num(m-1)+num(m-3);
	}
}
int main()
{
   int n;
   while(~scanf("%d",&n))
		if(n!=0)printf("%d\n",num(n));
   return 0;
}