#include<stdio.h>
int _abs(int x){
	return x<0?-x:x; 
}
int main(){
   int m,n;     // ÐÐºÅ-ÁÐºÅ
   int score[2],position;
   while(~scanf("%d%d",&m,&n))
   {
	   position = 1;  score[0] = 0;
	   for(int i = 1; i<=m*n; i++)
	   {
		   scanf("%d",&score[1]); 
		   if(_abs(score[1])>_abs(score[0]))
		   {
				score[0] = score[1];
				position = i;
		   }
	   }
	   if(position%n)
	   {
		   m = position/n+1;
	       n = position%n;
	   }else 
	   {
			m = position/n;
			n = n;
	   }
	   if(m)printf("%d %d %d\n",m,n,score[0]);
   }
   return 0;
}