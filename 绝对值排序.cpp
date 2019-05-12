#include<stdio.h>
#include<stdlib.h>
typedef struct num
{
	int n;
	struct num* next;
}num;
int absk(int x)
{
	return x>=0?x:-x;
}
num* creat(int n)
{
	num *h,*p,*l,*s;
	h = NULL;
	p = h; l = h;
	for(int i = 0; i<n; i++)
	{
		s = (num*)malloc(sizeof(num));
		scanf("%d",&s->n);
		s->next = NULL;
		if(h==NULL)
		{
			h = s;
			p = h;
			l = p->next;
		}else 
		{
			p = h;
			l = p->next;
			if(absk(s->n)>=absk(h->n))
			{
				s->next  = h;
				h = s;
			}else if(h->next==NULL)h->next = s;
			else 
			{
				while(l)
				{
					if(absk(s->n)>=absk(l->n))
					{
						s->next = l;
						p->next = s;
						break;
					}
					p = l;
					l = l->next;
				}
				if(s->next==NULL)p->next=s;
			}
		}
	}
	return h;
}
void print(num *h)
{
	if(h)
	{
		bool t = false;
		while(h)
		{
			if(t) printf(" "); 
			printf("%d",h->n);
			h = h->next;
			t=true;
		}
		printf("\n");
	}
}
int main()
{
   int n;
   while(~scanf("%d",&n)) print(creat(n));
   return 0;
}