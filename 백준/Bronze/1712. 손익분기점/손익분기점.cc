#include<stdio.h>
int main(){
	int a,b,c,d=0;
	scanf("%d %d %d",&a,&b,&c);
	if(b>=c)
	printf("-1");
	else
	printf("%d",a/(c-b)+1);
}