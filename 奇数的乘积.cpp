#include<stdio.h>
#define  N 3
int main()
{
	double n , m;
	double sum = 0;
	while( ~scanf("%lf",&n) )
	{
		sum = 1;
		for(int i=0;i<n;i++)
		{
			scanf("%lf",&m);
			if( ((int)m) % 2 )sum *= m;
		}
		printf("%.0lf\n",sum);
	}
	return 0;
}