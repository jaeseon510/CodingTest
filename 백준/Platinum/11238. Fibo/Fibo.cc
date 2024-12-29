#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

typedef struct {
    long long arr[2][2];
} Matrix;

int gcd(int a, int b);

Matrix mat_mult_mod(Matrix A, Matrix B, long long M);
Matrix mat_power_mod(Matrix A, int k, long long M);

int main() {

    Matrix Base;
    Base.arr[0][0] = 1, Base.arr[0][1] = 1, Base.arr[1][0] = 1, Base.arr[1][1] = 0;

    int T;
    scanf("%d", &T);

    Matrix Fibonacci;
    int N, M;

    int i;
    for (i = 0; i < T; i++) {
        scanf("%d %d", &N, &M);
        Fibonacci = mat_power_mod(Base, gcd(N, M), 1000000007);
        printf("%lld\n", Fibonacci.arr[0][1]);
    }

    return 0;
}

int gcd(int a, int b) {
    long long temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

Matrix mat_mult_mod(Matrix A, Matrix B, long long M) {
    Matrix result;
    int i, j, k;
    for (i = 0; i <= 1; i++) {
        for (j = 0; j <= 1; j++) {
            result.arr[i][j] = 0;
            for (k = 0; k <= 1; k++) {
                long long temp = (A.arr[i][k] * B.arr[k][j]) % M;
                result.arr[i][j] = (result.arr[i][j] + temp) % M;
            }
        }
    }
    return result;
}

Matrix mat_power_mod(Matrix A, int k, long long M) {
    Matrix result;
    result.arr[0][0] = 1, result.arr[0][1] = 0, result.arr[1][0] = 0, result.arr[1][1] = 1;
    while (k > 0) {
        if (k & 1) {
            result = mat_mult_mod(result, A, M);
        }
        A = mat_mult_mod(A, A, M);
        k >>= 1;
    }
    return result;
}
