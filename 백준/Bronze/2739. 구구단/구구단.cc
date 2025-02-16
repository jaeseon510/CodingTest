#include<stdio.h>
int main() {
	int N,a;
	scanf("%d", &N);
	for(a=1;a<=9;a++)
	printf("%d * %d = %d\n",N,a,N*a);
}