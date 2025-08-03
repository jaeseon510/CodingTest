#include <iostream>]
#include <cmath>
using namespace std;

string s;
char c;
const int MOD = 1234567891;
const int MULTIPLIER = 31;

int main() {
    int l;
    long long hash = 0;
    long long power = 1;

    scanf("%d", &l);
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        c = s[i];
        hash = (hash + (c - 'a' + 1) * power) % MOD;
        power = (power * MULTIPLIER) % MOD;
    }

    printf("%lld\n", hash);

    return 0;
}
