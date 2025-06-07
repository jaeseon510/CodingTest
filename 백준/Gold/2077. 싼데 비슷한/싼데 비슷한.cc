#include <iostream>
using namespace std;

int mineralSumByGroup[4], N, T, mineralAmount, minGroupIdx, minGroupSum;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> T;
    while (T--) {
        cout << "YES\n";

        cin >> N;
        for (int i = 0; i < 4; i++) mineralSumByGroup[i] = 0;

        for (int i = 0; i < N; i++) {
            cin >> mineralAmount;
            mineralSumByGroup[i % 4] += mineralAmount;
        }

        minGroupSum = INT32_MAX;
        int groupLimit = (N < 4) ? N : 4;
        for (int i = 0; i < groupLimit; i++) {
            if (mineralSumByGroup[i] < minGroupSum) {
                minGroupSum = mineralSumByGroup[i];
                minGroupIdx = i;
            }
        }

        if (minGroupIdx > 0) {
            cout << 0;

            for (int i = 1; i < minGroupIdx; i++) {
                cout << (minGroupIdx - 1);
            }

            N -= minGroupIdx;
        }

        while (N > 4) {
            cout << "0333";
            N -= 4;
        }

        cout << 0;
        for (int i = 1; i < N; i++) {
            cout << (N - 1);
        }
        cout << "\n";
    }
}
