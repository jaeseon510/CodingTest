#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	queue<int> arr;
	for (int i = 0; i < n; i++) {
		arr.push(i + 1);
	}
	while (arr.size() > 1) {
		arr.pop();
		arr.push(arr.front());
		arr.pop();
	}
	cout << arr.front();
}