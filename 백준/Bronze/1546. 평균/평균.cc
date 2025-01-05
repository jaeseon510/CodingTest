#include<stdio.h>
int main(){
	int N,score,max=0;
	double sum=0;
	scanf("%d",&N);
	for(int b=0;b<N;b++){
		scanf("%d",&score);
		sum+=score;
		if(max<score){
			max=score; 
		}
	}
	printf("%.2f",((sum/max)*100)/N);
}