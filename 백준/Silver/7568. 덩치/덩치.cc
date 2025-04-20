#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int arr[51][2] = { 0, };
	int result[51];
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
		result[i] = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) {
				result[i]++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << result[i] << " ";
	}
}