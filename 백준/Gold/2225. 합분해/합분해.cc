#include <iostream>
using namespace std;
int N, K, dp[201][201] = {0, };
int main(){
    cin>>N>>K;
    for(int i=0; i<=K; i++){
        dp[1][i] = i;
    }
    for(int i=2; i<=N; i++){
        for(int j=1; j<=K; j++){
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % 1000000000;
        }
    }
    cout<<dp[N][K]<<"\n";
    return 0;
}