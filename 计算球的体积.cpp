#include<stdio.h>
#define PI 3.1415927
int main()
{
	double r;
	while(~scanf("%lf",&r))
	printf("%.3lf\n",(PI*4*r*r*r)/3.0);
	return 0;
}