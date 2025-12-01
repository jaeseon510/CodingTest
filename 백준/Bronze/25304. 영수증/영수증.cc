#include<stdio.h>
int main(void){
	int sum,N,a,b,c=0;
	scanf("%d",&sum);
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d %d",&a,&b);
		b=a*b;
		c+=b;
	}
	if(sum==c){
		printf("Yes");
	}
	else{
		printf("No");
	}
}