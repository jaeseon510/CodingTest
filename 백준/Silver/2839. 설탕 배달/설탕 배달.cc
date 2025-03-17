#include<stdio.h>
int main(){
	int n,a=0;
	scanf("%d",&n);
	while(1){
		if(n==4){
			printf("-1");
			break;
		}
		if(n%5==0){
			a+=n/5;
			printf("%d",a);
			break;
		}
		n=n-3;
		a++;
		if(a<0){
			printf("-1");
			break;
		}
	}
}