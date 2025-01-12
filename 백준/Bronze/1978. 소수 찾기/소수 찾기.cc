#include<stdio.h>
int main(){
	int N,a,sum=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		int j;
		scanf("%d",&a);
		for(j=2;j<a;j++){
			if(a%j==0)
			break;
		}
		if(a==j)
		{
			sum+=1;
		}
	}
	printf("%d",sum);
}