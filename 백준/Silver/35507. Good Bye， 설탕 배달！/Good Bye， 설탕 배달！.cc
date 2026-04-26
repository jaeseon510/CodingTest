#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128 lll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        
        ll maxA = 0, maxB = 0, maxC = 0;
        bool ok = true;
        
        for (int i = 1; i <= n; i++) {
            ll a, b, c, p;
            cin >> a >> b >> c >> p;
            
            maxA = max(maxA, a);
            maxB = max(maxB, b);
            maxC = max(maxC, c);
            
            if (ok && (lll)i + maxA + maxB + maxC > (lll)p) {
                ok = false;
            }
        }
        
        cout << (ok ? "YES" : "NO") << "\n";
    }
    
    return 0;
}