#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b,sum=0,max=0;
	for (int i = 0; i < 10; i++) {
		cin >> a >> b;
		sum -= a;
		sum += b;
		if (sum > max) {
			max = sum;
		}
	}
	cout << max;
}