#include <iostream>
#include <vector>
#include <string>

using namespace std;
void rgt(vector<string>* a, int row, int col, int reslen);
void wrong(vector<string>* a, int row, int col);
int main() {
    int N, M;
    cin >> N >> M;
    vector<string> paper(3 * N);
    vector<bool> p(N * M);
    for (int i = 0; i < 3 * N; ++i) {
        cin >> paper[i];
    }
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            int row = 3 * i;
            int col = 8 * j;

            //string expression = paper[row + 1].substr(col + 1, 5);
            string expression = paper[row + 1].substr(col + 1, 6);

            size_t pos = expression.find('+');
            string num1 = expression.substr(0, pos);
            //string num2 = expression.substr(pos + 1);
            string num2 = expression.substr(pos + 1, 1);
            int result = stoi(num1) + stoi(num2);
            //if (result > 10) {

            if (expression[5] == '.') {
                if (result == (stoi(expression.substr(pos + 3, 1)))) {
                    p[sum] = true;
                    rgt(&paper, row, col, result);
                }
                else {
                    p[sum] = false;
                    wrong(&paper, row, col);
                }
            }
            else {
                //if (result == (stoi(expression.substr(pos + 3)) * 10) + stoi(expression.substr(pos + 4))) {
                if (result == (stoi(expression.substr(pos + 3, 1)) * 10) + stoi(expression.substr(pos + 4, 1))) {
                    p[sum] = true;
                    rgt(&paper, row, col, result);
                }
                else {
                    p[sum] = false;
                    wrong(&paper, row, col);
                }
            }
            sum++;
        }
    }
    for (int i = 0; i < 3 * N; ++i) {
        cout << paper[i] << endl;
    }
    return 0;
}
void rgt(vector<string>* a, int row, int col, int reslen) {
    if (reslen > 9) {
        for (int i = col + 1; i < col + 7; i++) {
            a[0][row][i] = '*';
            a[0][row + 2][i] = '*';
        }
        a[0][row + 1][col] = '*';
        a[0][row + 1][col + 7] = '*';
    }
    else {
        for (int i = col + 1; i < col + 6; i++) {
            a[0][row][i] = '*';
            a[0][row + 2][i] = '*';
        }
        a[0][row + 1][col] = '*';
        a[0][row + 1][col + 6] = '*';
    }
}
void wrong(vector<string>* a, int row, int col) {
    a[0][row][col + 3] = '/';
    a[0][row + 1][col + 2] = '/';
    a[0][row + 2][col + 1] = '/';
}