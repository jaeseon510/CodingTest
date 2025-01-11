#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int n;
priority_queue<int, vector<int>, greater<int>> p_queue;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp == 0) {
			if (p_queue.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << p_queue.top() << '\n';
				p_queue.pop();
			}
		}
		else {
			p_queue.push(temp);
		}
	}
}