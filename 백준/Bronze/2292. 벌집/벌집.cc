#include<stdio.h>
int main(){
	int a,b=2,c=5,sum=2;
	scanf("%d",&a);
	if(a<=1){
			printf("1");
			return 0;
		}
	while(1){
		if(b<=a && c+b>=a)
		{
			printf("%d",sum);
			break;
		}
		sum++;
		b=b+c+1;
		c+=6;
	}
}