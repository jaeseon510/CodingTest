#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b) {
	return a.first > b.first;
}
int main() {
	int n,answer=0;
	cin >> n;
	vector<pair<int, int>> p;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		p.push_back(make_pair(a, b));
	}
	sort(p.begin(), p.end(),cmp);
	int top_score = p[4].first;
	for (int i = 0; i < p.size() - 5; i++) {
		if (top_score == p[i + 5].first) {
			answer++;
		}
		else {
			break;
		}
	}
	cout << answer;
}