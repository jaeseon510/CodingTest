#include<stdio.h>
int main(void){
	int n;
	long long int arr[91]={0,1};
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		arr[i]=arr[i-2]+arr[i-1];
	}
	printf("%lld",arr[n]);
}