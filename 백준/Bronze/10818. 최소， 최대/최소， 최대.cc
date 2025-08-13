#include<stdio.h>
int main(){
	int N,max=-10000000,min=10000000;
	scanf("%d",&N);
	int b[N];
	for(int a=0;a<N;a++){
		scanf("%d",&b[a]);
		if(max<b[a]){
			max=b[a];
		}
		if(min>b[a]){
			min=b[a];
		}
	}
	printf("%d %d",min,max);
}