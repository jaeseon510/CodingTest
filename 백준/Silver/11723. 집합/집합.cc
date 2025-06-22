#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    string str = "";
    int M, n;
    int arr[21] = { 0 };


    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> str;

        if (str == "add") {
            cin >> n;
            if (arr[n] == 0) {
                arr[n] = 1;
            }
        }

        else if (str == "remove") {
            cin >> n;
            if (arr[n] == 1) {
                arr[n] = 0;
            }

        }
        else if (str == "check") {
            cin >> n;
            if (arr[n] == 0) {
                cout << "0\n";
            }
            else {
                cout << "1\n";
            }
        }
        else if (str == "toggle") {
            cin >> n;
            if (arr[n] == 1) {
                arr[n] = 0;
            }
            else {
                arr[n] = 1;
            }
        }
        else if (str == "all") {
            for (int k = 1; k <= 20; k++) { 
                arr[k] = 1;
            }
        }
        else if (str == "empty") {
            fill(begin(arr), end(arr), 0);
        }
    }

    return 0;
}