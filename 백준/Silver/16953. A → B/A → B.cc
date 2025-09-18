#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
#include<map>
using namespace std;
using ll = long long;
int main() {
	int a, b,cnt=0;
;	cin >> a >> b;
	while (1) {
		if (a > b) {
			cout << -1; break;
		}
		if (a == b) {
			cnt++;
			cout << cnt;
			break;
		}
		if (b % 10 == 1) {
			b--;
			b /= 10;
		}
		else if (b % 2 == 0) {
			b /= 2;
		}
		else {
			cout << -1;
			break;
		}
		cnt++;
	}
}