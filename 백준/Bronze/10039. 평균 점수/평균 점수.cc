#include<stdio.h>
int main(void){
	int a[5]={0,},sum=0;
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<5;j++){
	if(a[j]<40)
	a[j]=40;
	sum+=a[j];
	}
	printf("%d",sum/5);
}