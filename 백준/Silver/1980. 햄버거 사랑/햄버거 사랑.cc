#include <iostream>
#include <algorithm>
using namespace std;

int read() {
    int n = 0, c;
    while ((c = getchar()) <= 32);
    do {
        n = n * 10 + (c - '0');
    } while ((c = getchar()) > 32);
    return n;
}

int main() {
    int n = read(), m = read(), t = read();
    
    int min_value = min(n, m);
    int max_value = max(n, m);
    
    int b = 0, c = 10000;
    int i = 0;

    while (max_value * i <= t) {
        int sub = t - max_value * i;
        int tb = sub / min_value + i;
        int tc = sub % min_value;

        if (tc < c || tb > b) {
            b = tb;
            c = tc;
        }

        i++;
    }
    cout << b << " " << c << endl;
    return 0;
}
