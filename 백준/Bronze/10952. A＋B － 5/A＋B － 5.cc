#include<stdio.h>
int main(){
	int b,a;
	while(1)
	{
	scanf("%d %d",&a,&b);
	
	if(a==0 && b==0)
	{
	break;
	}
	else
	{
		printf("%d\n",a+b);
	}
}
}