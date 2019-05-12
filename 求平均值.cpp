#include<stdio.h>
#define N 100   // 学生数(<=50)  
#define M 100		// 课程数(<=5)
int main(){
   int k,num;
   int n,m;					
   double score[N][M]={};
   while(~scanf("%d%d",&n,&m))
   {
	   num = 0;
	   for(int i = 1; i<=n; i++)
	   {
		   for(int j = 1; j<=m; j++)
		   {
			   scanf("%lf",&score[i][j]);
			   score[i][0] += score[i][j];   // 学生总分
			   score[0][j] += score[i][j];   // 课程总分
		   }
	   }
	   for(int i = 1; i<=n; i++)
	   {
		   k = m;
		   for(int j  = 1; j<=m; j++)
		   {
			   if(score[i][j]<(score[0][j]/m))k=0;
		   }
		   if(k)num++;
	   }
	   if(n)
	   {
		   for(int i = 1; i<=n; i++)         // 学生的平均成绩
		   {
			   if(i>1)printf(" ");
			   printf("%.2lf",score[i][0]/m); 
		   }printf("\n");
		   for(int i = 1; i<=m; i++)         // 课程的平均成绩
		   {
			   if(i>1)printf(" ");
			   printf("%.2lf",score[0][i]/n);  
		   }printf("\n");
		   printf("%d\n",num);               // 达标人数
	   }
	   printf("\n");
   }
   return 0;
}