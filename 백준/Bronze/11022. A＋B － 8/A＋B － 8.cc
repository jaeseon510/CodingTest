#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int b[N],c[N];
	for(int a=0;a<N;a++){
		scanf("%d %d",&b[a],&c[a]);
	}
	for(int d=0;d<N;d++){
	printf("Case #%d: %d + %d = %d\n",d+1,b[d],c[d],b[d]+c[d]);}
}