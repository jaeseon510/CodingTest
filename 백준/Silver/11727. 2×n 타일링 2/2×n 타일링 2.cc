#include<iostream>
using namespace std;
int arr[1001];
int main() {
	int n;
	cin >> n;
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 3;
	for (int i = 3; i <= n; i++) {
		arr[i] = arr[i-1] + arr[i - 2]+arr[i-2];
		arr[i] %= 10007;
	}
	cout << arr[n] << '\n';
}