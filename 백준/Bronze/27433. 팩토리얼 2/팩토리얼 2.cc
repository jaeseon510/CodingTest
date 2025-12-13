#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    long long sum = 1;
    cin >> n;
    for (int i = n; i > 0; i--) {
        sum *= i;
    }
    cout << sum << '\n';
    return 0;
}