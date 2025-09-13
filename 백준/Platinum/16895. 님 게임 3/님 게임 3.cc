#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int p[1001];
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            x ^= p[j];
        }
        for (int j = 0; j < p[i]; j++) {
            if ((x ^ j) == 0) ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}