#include<stdio.h>
#include<string.h>
int main(){
	int N;
	char a[80];
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		int sum=0,score=1;
		scanf("%s",a);
		for(int j=0;j<strlen(a);j++){
			if(a[j]=='O'){
				sum+=score;
				score++;
			}
			else{//a==X
				score=1;
			}
			
		}
		printf("%d\n",sum);
	}
}