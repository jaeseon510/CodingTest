#include<iostream>
#include<vector>
#include<algorithm>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int e, s, m,count=1;
    cin >> e >> s >> m;
    while (1) {
        if ((count - e) % 15 == 0 && (count - s) % 28 == 0 && (count - m) % 19 == 0) {
            cout << count << endl;
            break;
        }
        else {
            count++;
        }
    }
    return 0;
}