#include <iostream>

using namespace std;

long long powNum(int num, int quot) {
    if (quot==0) return 1; 
    return num*powNum(num, quot-1);
}

long long getResult(int num, int cipher) {
    return num/powNum(10, cipher-1)%10;
}

int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);
    
    long long kk=0;
    long long cc=0;
    for (long long c=1 ; k>0 ; c++) {
        kk=k;
        cc=c; 
        k-=(9*c*powNum(10, c-1));
    }
    long long num=powNum(10, cc-1)+(kk-1)/cc;
    
    long long result = getResult(num, cc-(kk-1)%cc);
    if (num>n) result=-1;
    
    printf("%lld", result);
}