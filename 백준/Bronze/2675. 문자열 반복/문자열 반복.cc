#include<stdio.h>
#include<string.h>
int main(void){
	int T,key;
	char hmm[21];
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d %s",&key,&hmm);
		for(int j=0;j<strlen(hmm);j++){
			for(int x=0;x<key;x++){
				printf("%c",hmm[j]);
			}
		}
		printf("\n");
	}
}