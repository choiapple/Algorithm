#include <iostream>
using namespace std;
int N, tmp, map[500][500][2], answer = 0;
int dx[5] = {0, 0, -1, 0, 1};
int dy[5] = {0, -1, 0, 1, 0};
int DFS(int ni, int nj, int cnt){
    int max = 0, go;
    for(int i=1; i<=4; i++){
        int nx = ni + dx[i];
        int ny = nj + dy[i];
        if(nx >= N || nx < 0 || ny >= N || ny < 0) continue;
        if(map[nx][ny][0] <= map[ni][nj][0]) continue;
        if(map[nx][ny][1] == -1){
            go = DFS(nx, ny, 1);
            if(go > max){
                max = go;
            }
        }else{
            if(max < map[nx][ny][1]){
                max = map[nx][ny][1];
            }
        }
    }
    return map[ni][nj][1] = cnt + max;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    for(int ni=0; ni<N; ni++){
        for(int nj=0; nj<N; nj++){
            cin>>map[ni][nj][0];
            map[ni][nj][1] = -1;
        }
    }
    for(int ni=0; ni<N; ni++){
        for(int nj=0; nj<N; nj++){
            if(map[ni][nj][1] == -1){
                tmp = DFS(ni, nj, 1);
            }else{
                tmp = map[ni][nj][1];
            }
            if(tmp > answer){
                answer = tmp;
            }
        }
    }
    cout<<answer<<"\n";
}