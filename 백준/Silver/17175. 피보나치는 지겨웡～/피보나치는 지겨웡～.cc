#include <iostream>
using namespace std;
int main(){
    int n;
    long long dp[51] = {0, };
    cin>>n;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 3;
    dp[3] = 5;
    for(int i=4; i<=n; i++){
        dp[i] = (dp[i-1] + dp[i-2] + 1) % 1000000007;
    }
    cout<<dp[n]<<"\n";
    return 0;
}