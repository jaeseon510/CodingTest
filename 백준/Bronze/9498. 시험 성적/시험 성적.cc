#include<stdio.h>
int main(){
	int sum;
	scanf("%d",&sum);
	if(sum>=90){
		printf("A");
	}
	else if(sum>=80){
		printf("B");
	}
	else if(sum>=70){
		printf("C");
	}
	else if(sum>=60){
		printf("D");
	}
	else{
		printf("F");
	}
}