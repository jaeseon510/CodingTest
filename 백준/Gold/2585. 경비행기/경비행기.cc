#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;
int n, m, chk[1010];
pair<int, int> arr[1010];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> arr[i].first >> arr[i].second;
    arr[n + 1] = { 10000, 10000 };
    int l = 1, r = 14144;

    while (l <= r) {
        queue<int> q, qc;
        int fl = 0, mid = (l + r) / 2;
        fill(chk, chk + n + 2, 0);
        q.push(0), qc.push(0);
        chk[0] = 1;

        while (!q.empty()) {
            int cur = q.front(), c = qc.front();
            q.pop(), qc.pop();
            if (cur == n + 1) {
                fl = 1;
                break;
            }
            if (c == m + 1) continue;
            for (int i = 1; i <= n + 1; i++)
                if (!chk[i] && mid * mid > (arr[cur].first - arr[i].first) * (arr[cur].first - arr[i].first) + (arr[cur].second - arr[i].second) * (arr[cur].second - arr[i].second)) {
                    chk[i] = 1;
                    q.push(i);
                    qc.push(c + 1);
                }
        }
        if (fl) r = mid - 1;
        else l = mid + 1;
    }
    cout << l / 10 + (l % 10 != 0) << endl;
}
