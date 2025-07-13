#include<stdio.h>
int main(){
	long int N,b,c;
	scanf("%ld",&N);
	for(int a=0;a<N;a++){
		scanf("%d %d",&b,&c);
		printf("%d\n",b+c);
	}
}