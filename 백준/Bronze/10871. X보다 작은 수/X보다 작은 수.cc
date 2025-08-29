#include<stdio.h>
int main(void){
	int X,N,A;
	scanf("%d %d",&N,&X);
	for(int i=0;i<N;i++){
		scanf("%d",&A);
		if(A<X){
			printf("%d ",A);
		}
	}
}