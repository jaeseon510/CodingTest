#include<stdio.h>
int main(){
	int N,H,W,P;
	scanf("%d",&P);
	for(int i=0;i<P;i++)
	{
		scanf("%d %d %d",&H,&W,&N);
		if(N%H==0)
		printf("%d\n",(H*100)+(N/H));
		else
		printf("%d\n",(((N%H)*100)+(N/H+1)));
	}
}