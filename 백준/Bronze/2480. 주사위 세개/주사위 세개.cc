#include<stdio.h>
int main(void){
	int a,b,c,sum=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c && c==a)
	{
		sum=10000+a*1000;
	}
	else if(a==b)
	{
		sum=1000+a*100;
	}
	else if(b==c)
	{
		sum=1000+b*100;
	}
	else if(c==a)
	{
		sum=1000+a*100;
	}
	else{
		if(a>b && a>c)
		sum=a*100;
		else if(b>a && b>c)
		sum=b*100;
		else
		sum=c*100;
	}
	printf("%d",sum);
}