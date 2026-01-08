#include <iostream>
#include <vector>

using namespace std;

long long calculate_load(long long c, long long w) {
    long long q = c / w;
    long long r = c % w;
    return (w - r) * (q * q) + r * (q + 1) * (q + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<long long> w(N - 1);
    vector<long long> traffac(N, 0);

    for (int i = 0; i < N - 1; ++i) {
        cin >> w[i];
    }

    for (int j = 0; j < M; ++j) {
        int u, v;
        long long x;
        cin >> u >> v >> x;

        traffac[u - 1] += x;
        if (v < N) {
            traffac[v-1] -= x;
        }
    }

    vector<long long> vehicles(N - 1, 0);
    vehicles[0] = traffac[0];
    for (int i = 1; i < N - 1; ++i) {
        vehicles[i] = vehicles[i - 1] + traffac[i];
    }
    for (int i = 0; i < N - 1; ++i) {
        cout << calculate_load(vehicles[i], w[i]) << '\n';
    }

    return 0;
}