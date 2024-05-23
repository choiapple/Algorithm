#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin>>N>>M;
    int map[1001][1001] = {0, };
    int DP[1001][1001] = {0, };
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>map[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            int tmp = map[i][j];
            if(i > 0){
                tmp = max(tmp, map[i][j] + DP[i-1][j]);
            }
            if(j > 0){
                tmp = max(tmp, map[i][j] + DP[i][j-1]);
            }
            if(i > 0 && j > 0){
                tmp = max(tmp, map[i][j] + DP[i-1][j-1]);
            }
            DP[i][j] = tmp;
        }
    }
    cout<<DP[N-1][M-1]<<"\n";
    return 0;
}