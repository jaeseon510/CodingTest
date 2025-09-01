#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	int a[T];
	int b[T];
	int e[T];
	for(int c=0;c<T;c++){
		scanf("%d %d",&a[c],&b[c]);
		e[c]= a[c]+b[c];
	}
	for(int c=0;c<T;c++){
		printf("%d\n",e[c]);
	}
}