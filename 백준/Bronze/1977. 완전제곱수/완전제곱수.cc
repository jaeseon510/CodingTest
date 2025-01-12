#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M, sum = 0,min;
	cin >> M;
	cin >> N;
	int count = 0;
	vector<int> arr;
	for (int i = M; i <= N; i++) {
		int temp = sqrt(i);
		if (i == temp * temp) {
			count++;
			if (count == 1) {
				min = i;
			}
			sum += i;
		}
	}
	if (count == 0)cout << -1;
	else cout << sum << '\n' << min;
}