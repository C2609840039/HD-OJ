#include<stdio.h>
#define N 4
void exc(char *a,char *b)
{
	char c;
	c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	char a[N]={};
	while(~scanf("%c%c%c",&a[1],&a[2],&a[3]))
	{
		getchar();
		if(a[1]>a[2])exc(a+1,a+2);
		if(a[2]>a[3])exc(a+2,a+3);
		if(a[1]>a[2])exc(a+1,a+2);
		printf("%c %c %c\n",a[1],a[2],a[3]);
	}
	return 0;
}