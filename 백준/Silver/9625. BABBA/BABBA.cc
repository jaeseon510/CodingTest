#include<stdio.h>
int main(){
	int K,a=1,b=0,i;
	scanf("%d",&K);
	for(i=0;i<K;i++){
		int temp=a;
		a=b;
		b=temp+b;
	}
	printf("%d %d",a,b);
}