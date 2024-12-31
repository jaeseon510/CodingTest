#include<stdio.h>
int main(void){
	int x,y,w,h,p=0,j=0;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	h=h-y;
	w=w-x;
	if(w>x)
	{
		p+=x;
	}
	else
	{
		p+=w;
	}
	if(h>y)
	{
		j+=y;
	}
	else
	{
		j+=h;
	}
	if(p>j)
	{
		printf("%d",j);
	}
	else
	{
		printf("%d",p);
	}
}