#include <iostream>
#include <cmath>
using namespace std;
int N, R, G, B;
int arr[1001][3] = {0, };
int answer = 2147000000;
int main(){
    cin>>N;
    for(int i=1; i<=N; i++){
        cin>>R>>G>>B;
        arr[i][0] = R;
        arr[i][1] = G;
        arr[i][2] = B;
    }
    for(int start=0; start<=2; start++){
        int dp[1001][3] = {0, };
        for(int j=0; j<=2; j++){
            if(j == start) dp[1][start] = arr[1][start];
            else dp[1][j] = 2147000000;
        }
        for(int i=2; i<=N; i++){
            dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + arr[i][0];
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + arr[i][1];
            dp[i][2] = min(dp[i-1][1], dp[i-1][0]) + arr[i][2];
        }
        for(int j=0; j<=2; j++){
            if(j == start) continue;
            answer = min(answer, dp[N][j]);
        }
    }
    cout<<answer<<"\n";
    
}