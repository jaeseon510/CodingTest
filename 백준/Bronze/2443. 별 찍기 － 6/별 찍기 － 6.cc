#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 2; j >= i; j--) {
            cout << " ";
        }
        for (int j = 1; j <= i * 2 + 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}