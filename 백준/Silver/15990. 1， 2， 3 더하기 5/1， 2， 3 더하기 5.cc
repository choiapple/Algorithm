#include <iostream>
using namespace std;

long long dp[100001][4];

void solve(){
    dp[1][1] = dp[2][2] = dp[3][1] = dp[3][2] = dp[3][3] = 1;
    for(int n=4; n<=100000; n++){
        if(n-1 >= 0){
            dp[n][1] = (dp[n-1][2] + dp[n-1][3]) % 1000000009;
        }
        if(n-2 >= 0){
            dp[n][2] = (dp[n-2][1] + dp[n-2][3]) % 1000000009;
        }
        if(n-3 >= 0){
            dp[n][3] = (dp[n-3][1] + dp[n-3][2]) % 1000000009;
        }
    }
}

int main(){
    int T, n;
    cin>>T;
    solve();
    for(int t=0; t<T; t++){
        cin>>n;
        cout<<(dp[n][1] + dp[n][2] + dp[n][3])%1000000009<<"\n";
    }
    return 0;
}