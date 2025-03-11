#include<stdio.h>
int main(){
	int N,key;
	scanf("%d",&N);
	int arr[2001]={0,};
	for(int i=0;i<N;i++){
		scanf("%d",&key);
		arr[key+1000]=1;
	}
	for(int i=0;i<2001;i++){
		if(arr[i]==1)
		{
			printf("%d\n",i-1000);
		}
	}
	return 0;
}