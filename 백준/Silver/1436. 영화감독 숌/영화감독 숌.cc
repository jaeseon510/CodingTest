#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	int num = 665, cnt = 0;

	while (1) {
		if (n == cnt) break;
		num++;
		for (int i = 0; i < 10;i++) {
			if ((int)(num / pow(10, i)) % 1000 == 666) {
				cnt++;
				break;
			}
		}
	}
	printf("%d", num);

	return 0;
}