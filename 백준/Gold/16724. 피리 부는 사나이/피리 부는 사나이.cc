#include <iostream>
using namespace std;
int N, M;
int answer = 0;
int visit[1001][1001] = {0, };
int done[1001][1001] = {0, };
string map[1001];
void dfs(int y, int x){
    int tmpy, tmpx;
    if(map[y][x] == 'D'){
        tmpy = y + 1;
        tmpx = x;
    }else if(map[y][x] == 'L'){
        tmpy = y;
        tmpx = x-1;
    }else if(map[y][x] == 'R'){
        tmpy = y;
        tmpx = x+1;
    }else if(map[y][x] = 'U'){
        tmpy = y - 1;
        tmpx = x;
    }
    if(tmpy >= 0 && tmpy <N && tmpx >= 0 && tmpx < M){
        if(visit[tmpy][tmpx] == 0){
            visit[tmpy][tmpx] = 1;
            dfs(tmpy, tmpx);
        }else if(done[tmpy][tmpx] == 0){
            answer++;
        }
        done[y][x] = 1;
    }
}
int main(){
    cin>>N>>M;
    for(int i=0; i<N; i++){
        cin>>map[i];
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(visit[i][j] == 0){
                visit[i][j] = 1;
                dfs(i, j);
            }
        }
    }
    cout<<answer<<"\n";
}