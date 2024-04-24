#include <iostream>
#include <algorithm>
using namespace std;
int N, M, answer;
int map[1001][1001];
int cost[1001][1001][3];
int visit[1001][1001];
int dx[] = {0, 0, 1};
int dy[] = {1, -1, 0};
int DFS(int x, int y, int dir){
    if(x == N-1 && y == M-1) return map[x][y];
    if(cost[x][y][dir] != -987654321) return cost[x][y][dir];
    visit[x][y] = 1;
    int max_n = -987654321;
    for(int i=0; i<3; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && ny >= 0 && nx < N && ny < M){
            if(visit[nx][ny] == 0){
                max_n = max(max_n, DFS(nx, ny, i));
            }
        }
    }
    visit[x][y] = 0;
    cost[x][y][dir] = map[x][y] + max_n;
    return cost[x][y][dir];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N>>M;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>map[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cost[i][j][0] = -987654321;
            cost[i][j][1] = -987654321;
            cost[i][j][2] = -987654321;
        }
    }
    answer = DFS(0, 0, 0);
    cout<<answer<<"\n";
    return 0;
}