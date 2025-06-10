#include<stdio.h>
int f(int t){
	int ans=1;
	for(int i=t;i>0;i--){
		ans*=i;
	}
	return ans;
}
int main(){
	int N,K;
	scanf("%d %d",&N,&K);
	int result=f(N)/(f(K)*f(N-K));
	printf("%d",result);
}