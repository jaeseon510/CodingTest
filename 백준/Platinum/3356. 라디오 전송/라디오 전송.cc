#include <bits/stdc++.h>
using namespace std; using ii = pair<int,int>; using ll = long long; using vi = vector<int>;
#define rep(i,a,b) for (auto i = (a); i <= (b); ++i)
#define per(i,a,b) for (auto i = (b); i >= (a); --i)
#define all(x) begin(x), end(x)
#define siz(x) int((x).size())
#define Mup(x,y) x = max(x,y)
#define mup(x,y) x = min(x,y)
#define fi first
#define se second
#define dbg(...) fprintf(stderr,__VA_ARGS__)

mt19937 rng(random_device{}());
#define my_random(l,r) uniform_int_distribution<ll>(l,r)(rng)
#define my_shuffle(...) shuffle(__VA_ARGS__,rng)

struct rabin_karp {
    const ll A, B; vector<ll> h, p;
    rabin_karp(const string &s, ll a, ll b):
    A(a), B(b), h(siz(s)), p(siz(s)) { // 1-based string
        assert(siz(s)), p[0] = 1;
        rep(i,1,siz(s)-1) {
            h[i] = (h[i-1]*A+s[i])%B;
            p[i] = p[i-1]*A%B;
        }
    }
    ll hash(int a, int b) { // closed form
        assert(a <= b);
        ll r = (h[b]-h[a-1]*p[b-a+1])%B;
        return r >= 0 ? r : r+B;
    }
};

int A = my_random(1e7,1e8);
int B = 1'000'000'007;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    string s; cin >> s;
    s+=s;
    rabin_karp h("$"+s,A,B);
    rep(i,1,n) {
        bool flag = true;
        for (int j = 1; j <= n; j += i) {
            if (j+i-1 <= n) flag &= h.hash(j,j+i-1)==h.hash(1,i);
            else flag &= h.hash(j,n)==h.hash(1,n-j+1);
        }
        if (flag) cout << i, exit(0);
    }
}