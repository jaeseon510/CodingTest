#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int main() {
	int N, K, a = 1, index = 0, count = 0;
	cin >> N >> K;
	vector<int> arr;
	vector<int> num;
	for (int i = 1; i <= N; i++) {
		arr.push_back(i);
	}
	while (num.size() < N) {
		while (1) {
			if (arr[index] == -1);
			else {
				count++;
				if (count % K == 0) {
					num.push_back(arr[index]);
					arr[index] = -1;
					break;
				}
			}
			index++;
			if (index >= N) {
				index -= N;
			}

		}
	}
	cout << "<";
	for (int i = 0; i < N - 1; i++) {
		cout << num[i] << ", ";
	}
	cout << num[N - 1] << ">";
}