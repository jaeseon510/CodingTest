#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,num;
	priority_queue<int> pos;
	priority_queue<int> neg;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num > 0) {
			pos.push(num * -1);
		}
		else if (num < 0){
			neg.push(num);
		}
		else {
			if (pos.size() == 0 && neg.size() == 0) {
				cout << 0 << endl;
			}
			else if (pos.size()==0){
				cout << neg.top() << endl;
				neg.pop();
			}
			else if (neg.size()==0){
				cout << pos.top() * -1 << endl;
				pos.pop();
			}
			else {
				if (pos.top() > neg.top()) {
					cout << pos.top() * -1 << endl;
					pos.pop();
				}
				else {
					cout << neg.top() << endl;
					neg.pop();
				}
			}
		}
	}
}
