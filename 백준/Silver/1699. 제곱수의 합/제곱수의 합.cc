#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    int dp[100001] = {0, };
    cin>>N;
    for(int i=1; i<=N; i++){
        dp[i] = i;
        for(int j=1; j*j<=i; j++){
            dp[i] = min(dp[i], dp[i-j*j] + 1);
        }
    }
    cout<<dp[N]<<"\n";
    return 0;
}