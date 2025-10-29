#include <iostream>
using namespace std;
long long dp[1001][3][3][2];
long long mod = 1000000007;
int N;
long long solve(int now, int state, bool flag, int laststate){
    long long &ref = dp[now][state][laststate][flag];
    if(now == N-1){
        if(flag) return ref = 1;
        else return ref;
    }
    if(ref != 0) return ref;
    if(state == 0){
        ref += solve(now+1, 0, flag, state) % mod;
        ref += solve(now+1, 1, flag, state) % mod;
        ref += solve(now+1, 2, true, state) % mod;
    }else if(state == 1){
        if(laststate == 0){
            ref += solve(now+1, 0, flag, state) % mod;
            ref += solve(now+1, 1, flag, state) % mod;
            ref += solve(now+1, 2, true, state) % mod;
        }else{
            ref += solve(now+1, 0, flag, state) % mod;
        }
    }else if(state == 2){
        if(laststate == 0){
            ref += solve(now+1, 0, flag, state) % mod;
            ref += solve(now+1, 1, flag, state) % mod;
        }else{
            ref += solve(now+1, 0, flag, state) % mod;
        }
    }
    return ref = ref % mod;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>N;
    cout<<solve(0, 0, false, 0)<<"\n";
}