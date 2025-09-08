#include<stdio.h>
int main() {
	int A, B, C;
	scanf("%d", &C);
	for (int D = 0; D < C; D++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n", D+1, A + B);
	}
}