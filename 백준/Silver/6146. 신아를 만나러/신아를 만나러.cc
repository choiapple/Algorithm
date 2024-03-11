#include <iostream>
#include <queue>
using namespace std;
int X, Y, N, A, B;
int answer = 0;
int map[1002][1002] = {0, };
int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
int main(){
    cin>>X>>Y>>N;
    X = X + 500;
    Y = Y + 500;
    for(int i=0; i<N; i++){
        cin>>A>>B;
        map[B+500][A+500] = 2;
    }
    queue<pair<int, pair<int, int> > > q;
    q.push(make_pair(0, make_pair(Y, X)));
    while(!q.empty()){
        int len = q.front().first;
        int y = q.front().second.first;
        int x = q.front().second.second;
        q.pop();
        if(y == 500 && x == 500){
            answer = len;
            break;
        }
        for(int i=0; i<4; i++){
            int ty = y + dy[i];
            int tx = x + dx[i];
            if(ty < 0 || ty > 1000 || tx < 0 || tx > 1000) continue;
            if(map[ty][tx] != 0) continue;
            map[ty][tx] = 1;
            q.push(make_pair(len+1, make_pair(ty, tx)));
        }
    }
    cout<<answer<<"\n";
    return 0;
}