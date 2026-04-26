#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    ll D;
    cin >> N >> D;

    vector<ll> T(N), A(N), B(N);
    for (int i = 0; i < N; i++) cin >> T[i] >> A[i] >> B[i];

    vector<int> ord(N);
    iota(ord.begin(), ord.end(), 0);
    sort(ord.begin(), ord.end(), [&](int a, int b){ return T[a] < T[b]; });

    vector<ll> sT(N), sA(N), sB(N);
    for (int i = 0; i < N; i++) {
        sT[i] = T[ord[i]];
        sA[i] = A[ord[i]];
        sB[i] = B[ord[i]];
    }

    struct Top2 { ll b1, b2; int i1, i2; };
    vector<Top2> pre(N);
    pre[0] = {sB[0], 0LL, 0, -1};

    for (int i = 1; i < N; i++) {
        pre[i] = pre[i-1];
        if (sB[i] >= pre[i].b1) {
            pre[i].b2 = pre[i].b1; pre[i].i2 = pre[i].i1;
            pre[i].b1 = sB[i];    pre[i].i1 = i;
        } else if (sB[i] > pre[i].b2) {
            pre[i].b2 = sB[i];    pre[i].i2 = i;
        }
    }

    ll ans = 0;
    for (int i = 0; i < N; i++) {
        ans = max(ans, sA[i] + sB[i]);

        ll rem = D - sT[i];
        int r = (int)(upper_bound(sT.begin(), sT.end(), rem) - sT.begin()) - 1;
        if (r < 0) continue;

        ll bestB;
        if (pre[r].i1 != i)
            bestB = pre[r].b1;
        else
            bestB = pre[r].b2;

        if (bestB > 0)
            ans = max(ans, sA[i] + bestB);
    }

    cout << ans << "\n";
    return 0;
}