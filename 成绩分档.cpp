#include<stdio.h>
#include<math.h>
int main()
{
	double m;
	while(~scanf("%lf",&m))
	{
		if(m>=90 && m<=100)printf("A\n");
		else if(m>=80 && m<=89)printf("B\n");
		else if(m>=70 && m<=79)printf("C\n");
		else if(m>=60 && m<=69)printf("D\n");
		else if(m>=0 && m<=59)printf("E\n");
		else printf("Score is error!\n");
	}
	return 0;
}