#include <iostream>
using namespace std;

int N, M;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	if (N * M == 2) cout << "ChongChong";
	else cout << "GomGom";
}