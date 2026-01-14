#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;
int answer = 2147000000, N, M, map[51][51] = {0, }, total = 0, selec[11] = {0, };
vector<pair<int, int> > vc;
int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
// M개로 bfs 돌리는 함수
void bfs(){
    queue<pair<int, int> > q;
    int visit[51][51];
    memset(visit, -1, sizeof(visit));
    for(int i=0; i<vc.size(); i++){
        if(selec[i] == 1){
            q.push(vc[i]);
            visit[vc[i].first][vc[i].second] = 0;
        }
    }
    int tmp = 0, sec = 0;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if(map[nx][ny] == 1 || visit[nx][ny] != -1) continue;
            visit[nx][ny] = visit[x][y] + 1;
            if(map[nx][ny] == 0){
                tmp++;
                sec = visit[nx][ny];
            }
            q.push(make_pair(nx, ny));
        }
    }
    if(tmp == total) answer = min(answer, sec);
}
// M개 뽑는 함수
void re(int k, int idx){
    if(k == M){
        bfs();
        return;
    }
    for(int i=idx; i<vc.size(); i++){
        if(selec[i] == 1) continue;
        selec[i] = 1;
        re(k+1, i+1);
        selec[i] = 0;
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N>>M;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>map[i][j];
            if(map[i][j] == 0) total++;
            if(map[i][j] == 2){
                vc.push_back(make_pair(i, j));
            }
        }
    }
    re(0, 0);
    if(answer == 2147000000) cout<<-1;
    else cout<<answer;
    return 0;
}