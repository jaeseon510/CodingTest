#include <bits/stdc++.h>
using namespace std;

struct BIT {
    vector<int> tree;
    int n;
    BIT(int n) : n(n), tree(n + 1, 0) {}
    void update(int i, int v) { for (; i <= n; i += i & -i) tree[i] += v; }
    int query(int i) { int s = 0; for (; i > 0; i -= i & -i) s += tree[i]; return s; }
    int query(int l, int r) { return l > r ? 0 : query(r) - query(l - 1); }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N + 1);
        vector<vector<int>> byA(N + 2);
        for (int j = 1; j <= N; j++) {
            cin >> A[j];
            byA[A[j]].push_back(j);
        }

        priority_queue<int> pq;
        vector<int> g(N + 1);
        bool impossible = false;

        for (int i = N; i >= 1; i--) {
            for (int j : byA[i]) pq.push(j);
            if (pq.empty()) { impossible = true; break; }
            g[i] = pq.top();
            pq.pop();
        }

        while (!pq.empty()) pq.pop();

        if (impossible) { cout << -1 << "\n"; continue; }

        BIT bit(N);
        long long inv = 0;
        for (int i = 1; i <= N; i++) {
            inv += bit.query(g[i] + 1, N);
            bit.update(g[i], 1);
        }

        cout << inv << "\n";
    }

    return 0;
}