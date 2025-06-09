#include<iostream>
using namespace std;
int main() {
	int n;
	string s;
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;

		bool alphabet[26] = { false, };
		alphabet[(int)(s[0]) - 97] = true;
		for (int j = 1; j < s.size(); j++) {
			if (s[j] == s[j - 1]) {
				continue;
			}
			else if (alphabet[(int)(s[j]) - 97] == true) {
				count++;
				break;
			}
			else {
				alphabet[(int)(s[j] - 97)] = true;
			}
		}
	}
	cout << n - count;
	return 0;
}