#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> matrix(N);
    for (int i = 0; i < N; ++i) {
        cin >> matrix[i].first >> matrix[i].second;
    }

    vector<vector<int>> dp(N, vector<int>(N, 0));

    for (int chain_length = 2; chain_length <= N; ++chain_length) {
        for (int i = 0; i <= N - chain_length; ++i) {
            int j = i + chain_length - 1;
            dp[i][j] = INT_MAX;

            for (int k = i; k < j; ++k) {
                int cost = dp[i][k] + dp[k + 1][j] +
                    matrix[i].first * matrix[k].second * matrix[j].second;

                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    cout << dp[0][N - 1] << endl;

    return 0;
}