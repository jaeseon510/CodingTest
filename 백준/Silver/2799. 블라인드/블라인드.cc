#include <iostream>
#include <string>
using namespace std;

int main() {
    int M, N, blind[5] = {0};
    cin >> M >> N;
    cin.ignore();

    char map[510][510];
    for (int i = 0; i < M * 5 + 1; ++i)
        cin.getline(map[i], 510);

    for (int i = 1; i < M * 5; i += 5) {
        for (int j = 1; j < N * 5; j += 5) {
            if (map[i][j] == '.') blind[0]++;
            else if (map[i + 1][j] == '.') blind[1]++;
            else if (map[i + 2][j] == '.') blind[2]++;
            else if (map[i + 3][j] == '.') blind[3]++;
            else blind[4]++;
        }
    }

    for (int i = 0; i < 5; ++i)
        cout << blind[i] << " ";
    cout << endl;

    return 0;
}
