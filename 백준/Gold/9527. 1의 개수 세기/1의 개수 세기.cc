#include <iostream>
using namespace std;
long long power2[55];
long long A, B;
long long getOne(long long x){
    long long ret = x & 1;
    for(int i=54; i > 0; i--){
        if(x & (1LL<<i)){
            ret += power2[i - 1] + (x - (1LL<<i) + 1);
            x -= 1LL<<i;
        }
    }
    return ret;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>A>>B;
    power2[0] = 1;
    for(int i=1; i<55; i++){
        power2[i] = 2 * power2[i-1] + (1LL<<i);
    }
    cout<<getOne(B) - getOne(A-1)<<"\n";
    return 0;
}