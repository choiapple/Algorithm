#include <iostream>
#include <numeric>
using namespace std;
long long MOD = 1000000007;
long long f(long long x, long long y){
    if(y == 1) return x;
    if(y%2 == 1) return x * f(x, y-1)%MOD;
    long long p = f(x, y/2);
    return p*p%MOD;
}
int main(){
    long long m, a, b;
    long long answer = 0;
    cin>>m;
    while(m--){
        cin>>b>>a;
        long long g = gcd(a, b);
        b /= g;
        a /= g;
        answer += a * f(b, MOD-2)%MOD;
        answer %= MOD;
    }
    cout<<answer<<"\n";
    return 0;
    
}