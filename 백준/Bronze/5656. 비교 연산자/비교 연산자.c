#include <stdio.h>
#include <string.h>

int main() {
    int a, b;
    char operator[3];
    int caseNumber = 1;

    while (1) {
        scanf("%d %s %d", &a, operator, &b);

        if (strcmp(operator, "E") == 0) {
            break;
        }

        int result;

        if (strcmp(operator, ">") == 0) {
            result = a > b;
        } else if (strcmp(operator, ">=") == 0) {
            result = a >= b;
        } else if (strcmp(operator, "<") == 0) {
            result = a < b;
        } else if (strcmp(operator, "<=") == 0) {
            result = a <= b;
        } else if (strcmp(operator, "==") == 0) {
            result = a == b;
        } else if (strcmp(operator, "!=") == 0) {
            result = a != b;
        } else {
            printf("Invalid operator: %s\n", operator);
            continue;
        }

        printf("Case %d: %s\n", caseNumber++, result ? "true" : "false");
    }

    return 0;
}
