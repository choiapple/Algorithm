#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k, arr[100001] = {0, }, dp[100001] = {0, }, answer=-2147000000;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++){
        dp[i] = arr[i] + dp[i-1];
    }
    for(int i=k; i<=n; i++){
        if(dp[i] - dp[i-k] > answer){
            answer = dp[i] - dp[i-k];
        }
    }
    cout<<answer<<"\n";
    return 0;
    
}