#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int queue[10000];
int idx = -1;
int first = 0;
typedef enum {false, true} bool;
bool emp = false;

void push(int x) {
	idx++;
	queue[idx] = x;
	emp = true;
}

void pop() {
	if (emp == false)
		printf("-1\n");
	else {
		printf("%d\n", queue[first]);
		if (idx == first)
			emp = false;
		first++;
	}
}

void front() {
	if (emp == false)
		printf("-1\n");
	else
		printf("%d\n", queue[first]);
}

void back() {
	if (emp == false)
		printf("-1\n");
	else
		printf("%d\n", queue[idx]);
}

void size() {
	printf("%d\n", idx + 1 - first);
}

void empty() {
	if (emp == true)
		printf("0\n");
	else
		printf("1\n");
}

int main(void) {
	int n, x;
	scanf("%d", &n);

	char input[6];
	for (int i = 0; i < n; i++) {
		scanf("%s",input);
		if (!strcmp(input, "push")) {
			scanf("%d", &x);
			push(x);
		}
		else if (!strcmp(input, "pop")) {
			pop();
		}
		else if (!strcmp(input, "size"))
			size();
		else if (!strcmp(input, "empty")) {
			empty();
		}
		else if (!strcmp(input, "front")) {
			front();
		}
		else if (!strcmp(input, "back")) {
			back();
		}
	}
	return 0;
}