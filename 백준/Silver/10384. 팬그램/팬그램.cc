#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int a = 1;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		int index[26] = { 0, };
		string str;
		getline(cin, str, '\n');
		for (int j = 0; j < str.size(); j++) {
			if (str[j] >= 'a' && str[j] <= 'z') {
				str[j] = toupper(str[j]);
			}
			if (str[j] >= 'A' && str[j] <= 'Z') {
				index[str[j] - 'A']++;;
			}
		}
		int value = index[0];
		for (int j = 0; j < 26; j++) {
			value = min(value, index[j]);
		}
		if (value == 0) {
			cout << "Case " << a << ": " << "Not a pangram" << "\n";
		}
		else if (value == 1) {
			cout << "Case " << a << ": " << "Pangram!" << "\n";
		}
		else if (value == 2) {
			cout << "Case " << a << ": " << "Double pangram!!" << "\n";
		}
		else if (value == 3) {
			cout << "Case " << a << ": " << "Triple pangram!!!" << "\n";
		}
		a++;
	}
}