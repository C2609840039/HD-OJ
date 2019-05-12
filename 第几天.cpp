#include<stdio.h>
#define  N 3
int main()
{
	int date[N] = {};
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int sum;
	while( ~scanf("%d/%d/%d",&date[0],&date[1],&date[2]) )
	{
		sum = 0;
		if(date[1]>2)
		{
			if(!(date[0]%4) && date[0]%100 || !(date[0]%400))   sum = 1;
			else   sum = 0;
		
		}
		date[1]--;
		for( int i = 0; date[1]>0; i++)
		{
			sum += month[i];
			date[1]--;
		}
		sum += date[2]; 
		printf("%d\n",sum);
	}
	return 0;
}