#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int n, sum = 0, i = 1, count = 0;
	cin >> n;
	while (n >= sum) {
		sum += i;
		i++;
		count++;
	}
	count--;
	cout << count;
}