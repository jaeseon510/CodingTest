#include<stdio.h>
int main(void){
	int N,D=0;
	scanf("%d\t",&N);
	char a[N];
	for(int c=0;c<N;c++){
		a[c]=getchar();
		D=D+(a[c]-48);
		}
		printf("%d",D);
}