#include<stdio.h>
#include<string.h>
int main() {
    char buf[51];
    int ntest;
    int count1, count2;
    scanf("%d", &ntest);
    while (ntest--) {
        scanf("%s", buf);
        int len = strlen(buf);
        count1 = count2 = 0;
        for (int i = 0; i < len; i++) {
            if (buf[i] == '(')
                count1++;
            else if (buf[i] == ')')
                count2++;
            if (count2 > count1)
                break;
        }
        printf("%s\n", count1 == count2 ? "YES" : "NO");
    }
}