#include<stdio.h>
int main(void){
	int n,j=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		j+=i;
	}
	printf("%d",j);
}