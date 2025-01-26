#include<stdio.h>
int main(){
	int a[10],sum=0,y;
	for(int i=0;i<9;i++){
		scanf("%d",&a[i]);
		if(a[i]>sum){
			sum=a[i];
			y=i+1;
		}
	}
	printf("%d\n",sum);
	printf("%d",y);
}