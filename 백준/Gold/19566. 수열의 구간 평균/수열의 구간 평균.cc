#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
	long long n,k;
	cin >> n >> k;
	vector<long long> a(n);
	unordered_map <long long ,long long> countM;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	countM[0 - k * (-1 - 1)] = 1;
	long long  currentSum = 0;
	long long result = 0;
	for (int i = 0; i < n; ++i) {
		currentSum += a[i];
		long long target = currentSum - k * (i - 1);
		if (countM.find(target) != countM.end()) {
			result += countM[target];
		}
		countM[currentSum - k * (i - 1)]++;
	}
	cout << result << '\n';
	return 0;
}