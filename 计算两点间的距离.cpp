#include<stdio.h>
#include<math.h>
#define N 2
int main()
{
	double x[N],y[N];
	while(~scanf("%lf%lf%lf%lf",&x[0],&y[0],&x[1],&y[1]))
	{
		printf("%.2lf\n",sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1])));
	}
	return 0;
}