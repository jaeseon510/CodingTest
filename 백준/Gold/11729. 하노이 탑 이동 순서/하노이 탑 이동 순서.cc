#include <iostream>
#include <vector>
#include <string>

using namespace std;

int cnt = 0;
string sb;

void hanoi(int from, int use, int to, int N) {
    if (N == 1) {
        cnt++;
        sb += to_string(from) + " " + to_string(to) + "\n";
        return;
    }

    hanoi(from, to, use, N-1);
    sb += to_string(from) + " " + to_string(to) + "\n";
    cnt++;
    hanoi(use, from, to, N-1);
}

int main() {
    int N;
    cin >> N;

    hanoi(1, 2, 3, N);

    cout << cnt << endl;
    cout << sb;

    return 0;
}
