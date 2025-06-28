#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main() {
	string s, a, b;
	cin >> s >> a >> b;
	int slen, start_len, end_len;
	slen = s.size();
	start_len = a.size();
	end_len = b.size();
	unordered_set<string> substring;
	for (int i = 0; i <= slen - start_len; ++i) {
		if (s.substr(i, start_len) == a) {
			for (int j = i + start_len; j <= slen; ++j) {
				if (j - end_len >= i && s.substr(j - end_len, end_len) == b) {
					substring.insert(s.substr(i, j - i));
				}
			}
		}
	}
	cout << substring.size();
}
// substring 에 들어가는 문자열의 개수 - > n x (n+1)/2
// 
// [i,j)
// substring에 들어가는 문자열 개수 -> O(n²)

// 크기 m의 set에서 insert의 시간 복잡도 -> O(log m)
// set에서 매번 비교 연산에 쓰인 시간 복잡도 = 문자열의 길이에 비례 -> O(n)
// 따라서 set이 전체에서 가진 cost: O(n³log n²)