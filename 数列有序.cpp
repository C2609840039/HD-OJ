#include<stdio.h>
int main()
{
   int n,m;
   int a[102]={};
   while(~scanf("%d%d",&n,&m))
   {
	   if(n)
	   {
			for(int i =0; i<=n;i++)
		   {
			   scanf("%d",&a[i]);
			   if(m&&m<=a[i])   // ���ж�ֻ�ɹ�ִ��һ��
			   {
				   a[i+1] = a[i]; 
				   a[i] = m;
				   i++; m=0;
			   }
			   if((i==n-1)&&m)   // m�����е�������
			   {
					a[n] = m; break;
			   }
		   }
		   for(int i = 0;i<=n;i++)
		   {
			   if(i)printf(" ");
			   printf("%d",a[i]);
		   }
		   if(n!=0)printf("\n");
	   }
   }
   return 0;
}