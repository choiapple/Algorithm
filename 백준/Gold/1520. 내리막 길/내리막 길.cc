#include <iostream>
using namespace std;
int N, M, answer;
int map[501][501];
int dp[501][501];
int dx[] = {0, -1, 0, 1};
int dy[] = {-1, 0, 1, 0};
int DFS(int x, int y){
    if(x == N-1 && y == M-1) return 1;
    if(dp[x][y] != -1) return dp[x][y];
    
    dp[x][y] = 0;
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && nx < N && ny >= 0 && ny < M){
            if(map[nx][ny] < map[x][y]){
                dp[x][y] = dp[x][y] + DFS(nx, ny);
            }
        }
    }
    return dp[x][y];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>N>>M;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>map[i][j];
            dp[i][j] = -1;
        }
    }
    answer = DFS(0, 0);
    cout<<answer<<"\n";
}