#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int dy[4] = {-1, 0, 1, 0}; 
int dx[4] = {0, 1, 0, -1};
int N, map[101][101] = {0, }, k = 0, visit[101][101] = {0, }, answer = 987654321;
vector<pair<int, int> > vc[10001];
void check(int y, int x){
    queue<pair<int, int> > q;
    q.push(make_pair(y, x));
    vc[k].push_back(make_pair(y, x));
    visit[y][x] = 1;
    while(!q.empty()){
        int oy = q.front().first;
        int ox = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int ny = oy + dy[i];
            int nx = ox + dx[i];
            if(ny < 0 || nx < 0 || ny >= N || nx >= N) continue;
            if(map[ny][nx] == 1 && visit[ny][nx] == 0){
                vc[k].push_back(make_pair(ny, nx));
                q.push(make_pair(ny, nx));
                visit[ny][nx] = 1;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>map[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(visit[i][j] == 0 && map[i][j] == 1){
                check(i, j);
                k++;
            }
        }
    }
    for(int i=0; i<k-1; i++){
        for(int j=0; j<vc[i].size(); j++){
            int oy = vc[i][j].first;
            int ox = vc[i][j].second;
            for(int t=i+1; t<k; t++){
                for(int r=0; r<vc[t].size(); r++){
                    int ny = vc[t][r].first;
                    int nx = vc[t][r].second;
                    int tmp = abs(oy - ny) + abs(ox - nx) - 1;
                    if(answer > tmp) answer = tmp;
                }
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}