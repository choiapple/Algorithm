#include <iostream>
using namespace std;
struct Robot{
    int r;
    int c;
    int d;
};
int N, M, r, c, d;
int map[51][51];
int dr[] = {-1, 0, 1, 0};
int dc[] = {0, 1, 0, -1};
Robot robot;
int answer = 0;
void solve(){
    if(map[robot.r][robot.c] == 0){
        answer++;
        map[robot.r][robot.c] = 2;
        // cout<<robot.r<<" "<<robot.c<<" "<<robot.d<<"\n";
        // for(int i=0; i<N; i++){
        //     for(int j=0; j<M; j++){
        //         cout<<map[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
    }
    int flag = 0;
    for(int i=0; i<4; i++){
        int nr = robot.r + dr[i];
        int nc = robot.c + dc[i];
        if(nr < 0 || nc < 0 || nr >= N || nc >= M) continue;
        if(map[nr][nc] != 0) continue;
        flag = 1;
    }
    if(flag == 0){
        int nd = (robot.d + 2)%4;
        int nr = robot.r + dr[nd];
        int nc = robot.c + dc[nd];
        if(nr < 0 || nc < 0 || nr >= N || nc >= M) return;
        if(map[nr][nc] == 1) return;
        robot.r = nr;
        robot.c = nc;
        solve();
    }else{
        for(int i=1; i<=4; i++){
            int nd = (robot.d + 4 - i)%4;
            int nr = robot.r + dr[nd];
            int nc = robot.c + dc[nd];
            if(nr < 0 || nc < 0 || nr >= N || nc >= M) continue;
            if(map[nr][nc] != 0) continue;
            robot.r = nr;
            robot.c = nc;
            robot.d = nd;
            solve();
            break;
        }
    }
    return;
}
int main(){
    cin>>N>>M;
    cin>>r>>c>>d;
    robot = {r, c, d};
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>map[i][j];
        }
    }
    solve();
    cout<<answer<<"\n";
    return 0;
}