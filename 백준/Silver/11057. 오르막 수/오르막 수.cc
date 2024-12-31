#include <iostream>
using namespace std;
#define mod 10007
int dp[1001][10] = {0, };
int main(){
    int N, answer = 0;
    cin>>N;
    for(int i=0; i<10; i++){
        dp[1][i] = 1;
    }
    for(int i=2; i<=N; i++){
        for(int j=0; j<10; j++){
            if(j == 0){
                dp[i][j] = 1;
                continue;
            }
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
            dp[i][j] %= mod;
        }
    }
    for(int i=0; i<10; i++){
        answer += dp[N][i];
    }
    answer %= mod;
    cout<<answer<<"\n";
    return 0;
}