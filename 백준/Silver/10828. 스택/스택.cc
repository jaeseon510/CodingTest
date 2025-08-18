#include <stdio.h>
#include <string.h>

int stack[10001];
int idx = -1;

int top() {
	if (idx == -1)return -1;
	return stack[idx];
}

void push(int x) {
	idx++;
	stack[idx] = x;
}

int pop() {
	if (idx == -1) return -1;
	idx--;
	return stack[idx + 1];
}

int size() {
	return (idx + 1);
}

int empty() {
	if (idx == -1) return 1;
	else return 0;
}

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		char word[6];
		scanf("%s", word);
		if (strcmp(word, "push") == 0) {
			int x;
			scanf("%d", &x);
			push(x);
		}
		else if (strcmp(word, "pop") == 0)
			printf("%d\n", pop());

		else if (strcmp(word, "size") == 0)
			printf("%d\n", size());

		else if (strcmp(word, "empty") == 0)
			printf("%d\n", empty());

		else if (strcmp(word, "top") == 0)
			printf("%d\n", top());
	}
	return 0;
}