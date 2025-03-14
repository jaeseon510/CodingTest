#include<stdio.h>
int main(void){
	int a[15][15]={0,};
	int k,n,T;
	for(int i=0;i<15;i++)
	{
		a[0][i]=i;
	}
	for(int j=1;j<15;j++){
		for(int p=1;p<15;p++)
		{
			a[j][p]=a[j-1][p]+a[j][p-1];
		}
	}
	scanf("%d",&T);
	for(int u=0;u<T;u++){
	scanf("%d %d",&k,&n);
	printf("%d\n",a[k][n]);
	}
}