#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    #ifdef DEBUG
        freopen("in.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    ll n; cin >> n;
    cout << (n % 7 == 0 || n % 7 == 2 ? "CY" : "SK") << '\n';

    return 0;
}