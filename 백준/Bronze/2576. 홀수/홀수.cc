#include<iostream>
#include<limits>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int min = 101, sum = 0;
	for (int i = 0; i < 7; i++) {
		int n;
		cin >> n;
		
		if (n % 2 == 1) {
			sum += n;
			if(min > n)min = n;
		}
	}
	if (sum == 0) {
		cout << -1;
		return 0;
	}
	cout << sum << '\n' << min;
}