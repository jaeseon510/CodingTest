#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<string>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    vector<pair<int, int>> a(n);
    int b = 0,c=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = arr[i].first;
        arr[i].first -= 29;
        arr[i].second -= 59;
        a[i].first += 1;
        a[i].second += 1;
        a[i].first += arr[i].first / 30;
        a[i].second += arr[i].second / 60;
        if (arr[i].first % 30 > 0) {
            a[i].first++;
        }
        if (arr[i].second % 30 > 0) {
            a[i].second++;
        }
        b += a[i].first * 10;
        c += a[i].second * 15;
    }
    if ((b > c) ? 1 : 0) {
        cout << "M" << " " << c;
    }
    else if ((b < c) ? 1 : 0) {
        cout << "Y" << " " << b;
    }
    else {
        cout << "Y" << " " << "M" << " " << b << endl;
    }
}