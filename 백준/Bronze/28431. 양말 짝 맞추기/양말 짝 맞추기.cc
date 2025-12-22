#include <stdio.h>

int main() {
    int socks[5]; // 양말 숫자를 저장할 배열

    // 양말 숫자 입력 받기
    for (int i = 0; i < 5; i++) {
        scanf("%d", &socks[i]);
    }

    int count[10] = {0}; // 숫자 별 개수를 저장할 배열

    // 각 숫자 별 개수 세기
    for (int i = 0; i < 5; i++) {
        count[socks[i]]++;
    }

    int remaining_number = -1; // 남는 양말 숫자 초기화

    // 숫자 별로 쌍을 만들어 두 쌍을 뺀 후 남는 양말 숫자 찾기
    for (int i = 0; i < 10; i++) {
        while (count[i] >= 2) {
            count[i] -= 2;
        }
        if (count[i] == 1 && remaining_number == -1) {
            remaining_number = i;
        }
    }

    printf("%d\n", remaining_number);

    return 0;
}