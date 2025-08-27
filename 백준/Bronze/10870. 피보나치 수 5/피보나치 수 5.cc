#include<stdio.h>
int main(void){
	int a=0,b=1,c,sum=0,d;
	scanf("%d",&d);
	if(d==0){
		printf("0");
		return 0;
	}
	d-=1;
	while(sum<d){
		sum++;
		c=a+b;
		a=b;
		b=c;
	}
	printf("%d",b);
}