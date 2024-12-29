#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int count = 0;
	sort(arr.begin(), arr.end());
	for (int k = 0; k < n; k++) {
		int find = arr[k];
		int i = 0;
		int j = n - 1;
		while (i < j) {
			if (arr[i] + arr[j] == find) {
				if (i==k) {
					i++;
				}
				else if (j == k) {
					j--;
				}
				else {
					count++;
					break;
				}
			}
			else if (arr[i] + arr[j] > find) {
				j--;
			}
			else if (arr[i] + arr[j] < find) {
				i++;
			}
		}
	}
	cout << count;
}