#include <stdio.h>
 
int main(void)
{
	int type;
	scanf("%d", &type);
 
	int rept = type / 4;
 
	for (int i = 0; i < rept; i++)
		printf("long ");
	
	printf("int");
 
	return 0;
}