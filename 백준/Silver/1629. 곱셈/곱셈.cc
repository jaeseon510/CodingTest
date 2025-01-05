#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<utility>
#include<queue>
#include<string>
#define X first
#define Y second
using namespace std;
long long a, b, c;
long long int f(long long int y) {
	if (y == 1) return a % c;
	long long k = f(y / 2) % c;
	if (y % 2 == 0) return k * k % c;
	else return k * k % c * a % c;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin >> a >> b >> c;
	cout << f(b);
}