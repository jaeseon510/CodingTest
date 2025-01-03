#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<string, int> m;
    string title, best_seller;

    int max_count = 0;

    for (int i = 0; i < n; i++) {
        cin >> title;
        m[title]++;

        if (m[title] > max_count || (m[title] == max_count && title < best_seller)) {
            max_count = m[title];
            best_seller = title;
        }
    }

    cout << best_seller << '\n';

    return 0;
}
