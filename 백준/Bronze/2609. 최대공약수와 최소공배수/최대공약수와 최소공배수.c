#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int i,j;
	int temp;
	
	j=(a<b)?a:b;
	
	for(i=1;i<=j;i++){
		if(a%i==0 && b%i==0){
			temp = i;
		}
	}
	printf("%d\n",temp);
	j=(a>b)?a:b;
	
	for(i=j;;i++){
		if(i%a==0 && i%b==0){
			temp=i;
			break;
		}
	}
	printf("%d\n",temp);
	return 0;
}