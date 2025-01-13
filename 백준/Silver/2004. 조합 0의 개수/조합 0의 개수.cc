#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m, two = 0, five = 0;
	cin >> n >> m;
	for (long long i = 2; i <= n; i *= 2) {
		two += n / i;
	}
    for (long long i = 2; i <= n - m; i *= 2) {
        two -= (n - m) / i;
    }
    for (long long i = 2; i <= m; i *= 2) {
        two -= m / i;
    }
    for (long long i = 5; i <= n; i *= 5) {
        five += n / i;
    }
    for (long long i = 5; i <= n - m; i *= 5) {
        five -= (n - m) / i;
    }
    for (long long i = 5; i <= m; i *= 5) {
        five -= m / i;
    }
    cout << min(two, five) << '\n';
    return 0;
}