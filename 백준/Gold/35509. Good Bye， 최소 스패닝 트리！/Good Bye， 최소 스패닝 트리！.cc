#include <bits/stdc++.h>
using namespace std;

struct Edge { int u, v, w, idx; };

struct DSU {
    vector<int> p, r;
    DSU(int n) : p(n), r(n, 0) { iota(p.begin(), p.end(), 0); }
    int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
    bool unite(int x, int y) {
        x = find(x); y = find(y);
        if (x == y) return false;
        if (r[x] < r[y]) swap(x, y);
        p[y] = x;
        if (r[x] == r[y]) r[x]++;
        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<Edge> edges(M);
    for (int i = 0; i < M; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
        edges[i].u--; edges[i].v--;
        edges[i].idx = i + 1;
    }

    vector<Edge> sorted = edges;
    sort(sorted.begin(), sorted.end(), [](const Edge& a, const Edge& b){ return a.w < b.w; });

    DSU dsu1(N);
    vector<int> mst_edge_ids;
    long long W_mst = 0;
    int B = 0;

    for (auto& e : sorted) {
        if (dsu1.unite(e.u, e.v)) {
            mst_edge_ids.push_back(e.idx);
            W_mst += e.w;
            B = max(B, e.w);
            if ((int)mst_edge_ids.size() == N - 1) break;
        }
    }

    cout << "NO\n";

    vector<Edge> eligible;
    for (auto& e : edges)
        if (e.w <= B) eligible.push_back(e);

    sort(eligible.begin(), eligible.end(), [](const Edge& a, const Edge& b){ return a.w > b.w; });

    DSU dsu2(N);
    vector<int> mbst_edge_ids;
    long long W_mbst = 0;

    for (auto& e : eligible) {
        if (dsu2.unite(e.u, e.v)) {
            mbst_edge_ids.push_back(e.idx);
            W_mbst += e.w;
            if ((int)mbst_edge_ids.size() == N - 1) break;
        }
    }

    if (W_mbst > W_mst) {
        cout << "YES\n";
        for (int id : mbst_edge_ids) cout << id << "\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}