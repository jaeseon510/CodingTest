#include<stdio.h>
int main(void)
{
	int n,a[1000]={0},k,sum=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &k);
		a[k-1]++;
	}
	k=0;
	while(n>0)
	{
			if(a[k]>=1)
			{
				sum+=n*(k+1);
				a[k]--;
				n--;
			}
			else
				k++;
	}
	printf("%d", sum);
}
