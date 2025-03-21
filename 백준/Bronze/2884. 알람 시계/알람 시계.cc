#include<stdio.h>
int main() {
	int a, b,c=0;
	scanf("%d %d", &a, &b);
	if (a == 0 && b < 45)
	{
		a = 23;
		b -= 45;
	}
	else if (b < 45)
	{
		a = a - 1;
		b -= 45;
	}
	else
	{
		b = b - 45;
	}
	
	
	if(b<0){
		b+=60;
	}
	printf("%d %d", a, b);
}