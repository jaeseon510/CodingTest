#include<stdio.h>
int main(){
	int a,b,a_1=0,a_2=0,a_3=0,b_1=0,b_2=0,b_3=0;
	scanf("%d %d",&a,&b);
	a_1=a%10;
	a_2=(a/10)%10;
	a_3=(a/100)%10;
	a=(a_3)+(a_2*10)+(a_1*100);
	
	b_1=b%10;
	b_2=(b/10)%10;
	b_3=(b/100)%10;
	b=(b_3)+(b_2*10)+(b_1*100);
	if(a>b)
	printf("%d",a);
	else
	printf("%d",b);
}