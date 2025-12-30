#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T, N;
	int max = 0;
	cin >> T;
	cin >> N;
	vector<int> f(N);
	for (int i = 0; i < N; i++) {
		cin >> f[i];
		max += f[i];
	}
	if (max >= T) {
		cout << "Padaeng_i Happy";
	}
	else {
		cout << "Padaeng_i Cry";
	}
}