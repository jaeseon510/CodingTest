#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
#define MAX 130
int board[MAX][MAX];
int Blue, White;
void DFS(int x, int y, int N) {
	int temp=0;
	for (int i = x; i < x + N; i++) {
		for (int j = y; j < y + N; j++) {
			if (board[i][j]) {
				temp++;
			}
		}
	}
	if (!temp)White++;
	else if (temp == N * N)Blue++;
	else {
		DFS(x, y, N / 2);
		DFS(x, y + N / 2, N / 2);
		DFS(x + N / 2, y, N / 2);
		DFS(x + N / 2, y + N / 2, N / 2);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	DFS(0, 0, n);
	cout << White << '\n' << Blue;
}