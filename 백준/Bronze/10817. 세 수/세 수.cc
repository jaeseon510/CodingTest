#include <stdio.h>
#define MAX_SIZE 3

void bubble_sort(int list[], int n) {
	int temp;

	for (int i = n - 1; i > 0; --i) {
		for (int j = 0; j < i; ++j) {
			if (list[j] < list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}

int main() {
	int list[MAX_SIZE];
	for (int i = 0; i < MAX_SIZE; ++i) {
		scanf("%d", &list[i]);
	}
	bubble_sort(list, MAX_SIZE);
	printf("%d", list[1]);
	return 0;
}