#include<stdio.h>
int main(void){
	int a,b,j,sum,c;
	scanf("%d",&c);
	for(int p=0;p<c;p++){
	scanf("%d %d",&a,&b);
	for(int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			j=i;
		}
	}
	sum=(a*b)/j;
	printf("%d\n",sum);
}
}