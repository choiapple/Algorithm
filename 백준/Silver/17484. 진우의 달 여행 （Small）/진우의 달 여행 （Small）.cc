#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    int map[10][10], dp[7][7][3];
    
    cin>>N>>M;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>map[i][j];
            
            dp[i][j][0] = dp[i][j][1] = dp[i][j][2] = map[i][j];
            if(j == 0) dp[i][j][0] = 1000;
            if(j == M-1) dp[i][j][2] = 1000;
        }
    }
    for(int i=1; i<N; i++){
        for(int j=0; j<M; j++){
            if(j != 0){
                dp[i][j][0] += min(dp[i-1][j-1][1], dp[i-1][j-1][2]);
            }
            dp[i][j][1] += min(dp[i-1][j][0], dp[i-1][j][2]);
            if(j != M-1){
                dp[i][j][2] += min(dp[i-1][j+1][0], dp[i-1][j+1][1]);
            }
        }
    }
    int answer = 1000;
    for(int j=0; j<M; j++){
        for(int k=0; k<3; k++){
            answer = min(answer, dp[N-1][j][k]);
        }
    }
    cout<<answer<<"\n";
    return 0;
}