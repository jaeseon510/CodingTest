#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<string> arr;
	for (int i = 0; i < s.size(); i++) {
		arr.push_back(s.substr(i, s.size()));
	}

	sort(arr.begin(), arr.end());
	for (int i = 0; i < s.size(); i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}