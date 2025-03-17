#include<stdio.h>
int main(void){
	int A,B,V,sum=0;
	scanf("%d %d %d",&A,&B,&V);
	sum=(V-B-1)/(A-B)+1;
	printf("%d",sum);
}