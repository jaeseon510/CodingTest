#include<stdio.h>
int main(void){
	long long int t,n;
	scanf("%lld",&n);
	long long int arr[102]={0,};
	for (int j=0;j<=3;j++){
		arr[j]=1;
	}
	for(int i=3;i<=100;i++){
			arr[i]=arr[i-3]+arr[i-2];
	}
	for(int p=0;p<n;p++){
	scanf("%lld",&t);
	printf("%lld\n",arr[t-1]);
	}
}