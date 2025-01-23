#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    a += c / 60;
    b += c % 60;
    if (b >= 60) {
        a++;
        b %= 60;
    }
    if (a >= 24) {
        a -= 24;
    }
    printf("%d %d",a,b);
}