#include<stdio.h>

int main(void) {
    int i, s = 0, t = 0, arr[4];
    for(i=0;i<4;i++){
        scanf("%d", &arr[i]);
        s += arr[i];
    }
    for(i=0;i<4;i++){
        scanf("%d", &arr[i]);
        t += arr[i];
    }
    printf("%d", s>=t?s:t);
}