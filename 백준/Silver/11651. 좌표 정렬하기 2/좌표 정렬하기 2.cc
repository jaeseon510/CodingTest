#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
#define X first
#define Y second
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	pair<int,int> arr[100001];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i].Y >> arr[i].X;
	}
	sort(arr, arr+n);
	for (int i = 0; i < n; i++) {
		cout << arr[i].Y << ' ' << arr[i].X << '\n';
	}

}