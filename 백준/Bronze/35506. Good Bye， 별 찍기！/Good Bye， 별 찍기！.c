#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 2 * n - i - 1; j > 0; j--)
            printf(" ");
        printf("*");
        for (int j = 0; j < n; j++)
            printf(" ");
        printf("*");
        for (int j = 0; j < 2 * i + 1; j++)
            printf(" ");
        printf("*");
        for (int j = n - i - 1; j > 0; j--)
            printf(" ");
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
            printf(" ");
        printf("*");
        for (int j = 0; j < n + (2 * i + 1); j++)
            printf(" ");
        printf("*");
        for (int j = 2 * n - 2 * i - 1; j > 0; j--)
            printf(" ");
        printf("*");
        for (int j = 0; j < i; j++)
            printf(" ");
        printf("\n");
    }
    return 0;
}