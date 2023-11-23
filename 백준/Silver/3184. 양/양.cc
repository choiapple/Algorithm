#include <iostream>
#include <queue>
using namespace std;
int R, C;
int answer_O = 0;
int answer_V = 0;
int visit[251][251] = {0, };
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};
string map[251];
void bfs(int y, int x){
    queue<pair<int, int> > q;
    q.push(make_pair(y, x));
    visit[y][x] = 1;
    int o = 0;
    int v = 0;
    while(!q.empty()){
        int yy = q.front().first;
        int xx = q.front().second;
        q.pop();
        if(map[yy][xx] == 'o'){
            o++;
        }else if(map[yy][xx] == 'v'){
            v++;
        }
        for(int i=0; i<4; i++){
            int tmpy = yy + dy[i];
            int tmpx = xx + dx[i];
            if(tmpy < R && tmpy >=0 && tmpx < C && tmpx >=0){
                if(visit[tmpy][tmpx] == 0){
                   if(map[tmpy][tmpx] != '#'){
                       visit[tmpy][tmpx] = 1;
                       q.push(make_pair(tmpy, tmpx));
                   }
                }
            }
        }
    }
    if(v >= o){
        o = 0;
    }else{
        v = 0;
    }
    answer_O += o;
    answer_V += v;
}
int main(){
    cin>>R>>C;
    for(int i=0; i<R; i++){
        cin>>map[i];
    }
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            if(map[i][j] != '#' && visit[i][j] == 0){
                bfs(i, j);
            }
        }
    }
    cout<<answer_O<<" "<<answer_V<<"\n";
    
}