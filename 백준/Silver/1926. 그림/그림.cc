#include <iostream>
#include <queue>
using namespace std;
int n, m;
int map[501][501] = {0, };
int visit[501][501] = {0, };
int dy[4] = {0, -1, 0, 1};
int dx[4] = {-1, 0, 1, 0};
int max_n = 0;
int cnt_n = 0;
void bfs(int y, int x){
    int tmp = 1;
    queue<pair<int, int> > q;
    q.push(make_pair(y, x));
    visit[y][x] = 1;
    while(!q.empty()){
        int yy = q.front().first;
        int xx = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int tmpy = yy + dy[i];
            int tmpx = xx + dx[i];
            if(tmpy < 0 || tmpy >= n || tmpx < 0 || tmpx >= m) continue;
            if(map[tmpy][tmpx] == 0 || visit[tmpy][tmpx] == 1) continue;
            visit[tmpy][tmpx] = 1;
            q.push(make_pair(tmpy, tmpx));
            tmp++;
        }
    }
    if(tmp > max_n) max_n = tmp;
}
int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>map[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(map[i][j] == 0 || visit[i][j] == 1) continue;
            cnt_n++;
            bfs(i, j);
        }
    }
    cout<<cnt_n<<"\n"<<max_n<<"\n";
    return 0;
}