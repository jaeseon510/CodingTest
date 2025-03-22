#include<stdio.h>
int main(){
	int sum[10]={0,};
	int sum1[42]={0,};
	int t;
	for(int a=0;a<10;a++){
		scanf("%d",&sum[a]);
		t=sum[a]%42;
		sum1[t]=1;
	}
	t=0;
	for(int b=0;b<42;b++)
	{
		if(sum1[b]==1)
		t++;
	}
	printf("%d",t);
}