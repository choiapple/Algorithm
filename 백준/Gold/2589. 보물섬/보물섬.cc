#include <iostream>
#include <queue>
using namespace std;
int L, W, answer = 0, tmp;
string s[51];
int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
int visit[51][51] = {0, };
bool check(int x, int y){
    if(x >= 0 && x < L && y >= 0 && y < W){
        return true;
    }
    return false;
}
void bfs(int x, int y){
    tmp = 0;
    queue<pair<int, pair<int, int> > > q;
    q.push(make_pair(0, make_pair(x, y)));
    for(int i=0; i<L; i++){
        for(int j=0; j<W; j++){
            visit[i][j] = 0;
        }
    }
    visit[x][y] = 1;
    while(!q.empty()){
        pair<int, pair<int, int> > fq = q.front();
        q.pop();
        if(tmp < fq.first){
            tmp = fq.first;
        }
        for(int i=0; i<4; i++){
            int tmpx = fq.second.first + dx[i];
            int tmpy = fq.second.second + dy[i];
            if(check(tmpx, tmpy)){
                if(s[tmpx][tmpy] == 'L' && visit[tmpx][tmpy] == 0){
                    visit[tmpx][tmpy] = 1;
                    q.push(make_pair(fq.first+1, make_pair(tmpx, tmpy)));
                }
            }
        }
    }
    if(tmp > answer){
        answer = tmp;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>L>>W;
    for(int i=0; i<L; i++){
        cin>>s[i];
    }
    for(int i=0; i<L; i++){
        for(int j=0; j<W; j++){
            if(s[i][j] == 'L'){
                bfs(i, j);
            }
        }
    }
    cout<<answer<<"\n";
}