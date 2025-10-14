#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

int n, l, r;
int a[50][50];
bool visit[50][50];

vector<pair<int, int> > open;

bool bfs(int y, int x){
    if(visit[y][x]) return false;
    
    open.clear();
    queue<pair<int, int> > q;
    q.push(make_pair(y, x));
    visit[y][x] = true;
    open.push_back(make_pair(y, x));
    
    while(!q.empty()){
        int cy = q.front().first;
        int cx = q.front().second;
        q.pop();
        
        for(int dir=0; dir<4; dir++){
            int ny = cy + dy[dir];
            int nx = cx + dx[dir];
            
            if(ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
            if(visit[ny][nx]) continue;
            
            int diff = abs(a[ny][nx] - a[cy][cx]);
            if(l <= diff && diff <= r){
                q.push(make_pair(ny, nx));
                visit[ny][nx] = true;
                open.push_back(make_pair(ny, nx));
            }
        }
    }
    return open.size() > 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>n>>l>>r;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    
    int ans = 0;
    while(true){
        memset(visit, false, sizeof(visit));
        bool flag = false;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(bfs(i, j)){
                    flag = true;
                    
                    int sum = 0;
                    for(auto p : open){
                        sum += a[p.first][p.second];
                    }
                    int avg = sum / open.size();
                    
                    for(auto p : open){
                        a[p.first][p.second] = avg;
                    }
                }
            }
        }
        if(!flag) break;
        ans++;
    }
    cout<<ans<<"\n";
    return 0;
}
