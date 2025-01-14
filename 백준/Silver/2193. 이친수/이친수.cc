#include<iostream>
#define endl '\n'
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	long long int arr[91] = { 0, };
	arr[0] = 1;
	arr[1] = 1;
	cin >> n;
	for (int i = 2; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[n - 1] << endl;
}