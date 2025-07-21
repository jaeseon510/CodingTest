#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    long long cnt = 0, sum = 0;
    int left = 0, right = 0;
    while (true) {
        if (sum >= M) {
            sum -= A[left++];
        } else if (right == N) {
            break;
        } else {
            sum += A[right++];
        }
        if (sum == M) cnt++;
    }

    cout << cnt;
    return 0;
}
