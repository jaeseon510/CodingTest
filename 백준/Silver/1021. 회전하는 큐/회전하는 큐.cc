#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int idx;
	int n, m;
	cin >> n >> m;
	deque<int> dq;
	int count = 0;
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		for (int j = 0; j < dq.size(); j++) {
			if (dq[j] == a) {
				idx = j;
				break;
			}
		}

		if (idx < dq.size() - idx) {
			while (1) {
				if (dq.front() == a) {
					dq.pop_front();
					break;
				}
				++count;
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else {
			while (1) {
				if (dq.front() == a) {
					dq.pop_front();
					break;
				}
				++count;
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
	cout << count;
}