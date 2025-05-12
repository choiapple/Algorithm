#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N;
    long long dp[70] = {0, };
    cin>>T;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i=4; i<=69; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4];
    }
    for(int t=0; t<T; t++){
        cin>>N;
        cout<<dp[N]<<"\n";
    }
    return 0;
}