#include <iostream>
using namespace std;
struct Dice{
    int n;
    int t;
    int w;
    int e;
    int s;
    int b;
};
int N, M, x, y, K;
Dice dice = {0, 0, 0, 0, 0, 0}; 
int map[21][21] = {0, };
void changeDice(int bang){
    int flag = 0;
    if(bang == 1){
        int nx = x;
        int ny = y + 1;
        if(nx < 0 || ny < 0 || nx >= N || ny >= M){
            flag = 1;
        }else{
            if(map[nx][ny] == 0){
                map[nx][ny] = dice.e;
            }else{
                dice.e = map[nx][ny];
                map[nx][ny] = 0;
            }
            int tmp = dice.e;
            dice.e = dice.t;
            dice.t = dice.w;
            dice.w = dice.b;
            dice.b = tmp;
            x = nx;
            y = ny;
        }
    }else if(bang == 2){
        int nx = x;
        int ny = y - 1;
        if(nx < 0 || ny < 0 || nx >= N || ny >= M){
            flag = 1;
        }else{
            if(map[nx][ny] == 0){
                map[nx][ny] = dice.w;
            }else{
                dice.w = map[nx][ny];
                map[nx][ny] = 0;
            }
            int tmp = dice.w;
            dice.w = dice.t;
            dice.t = dice.e;
            dice.e = dice.b;
            dice.b = tmp;
            x = nx;
            y = ny;
        }
    }else if(bang == 3){
        int nx = x - 1;
        int ny = y;
        if(nx < 0 || ny < 0 || nx >= N || ny >= M){
            flag = 1;
        }else{
            if(map[nx][ny] == 0){
                map[nx][ny] = dice.n;
            }else{
                dice.n = map[nx][ny];
                map[nx][ny] = 0;
            }
            int tmp = dice.n;
            dice.n = dice.t;
            dice.t = dice.s;
            dice.s = dice.b;
            dice.b = tmp;
            x = nx;
            y = ny;
        }
    }else if(bang == 4){
        int nx = x + 1;
        int ny = y;
        if(nx < 0 || ny < 0 || nx >= N || ny >= M){
            flag = 1;
        }else{
            if(map[nx][ny] == 0){
                map[nx][ny] = dice.s;
            }else{
                dice.s = map[nx][ny];
                map[nx][ny] = 0;
            }
            int tmp = dice.b;
            dice.b = dice.s;
            dice.s = dice.t;
            dice.t = dice.n;
            dice.n = tmp;
            x = nx;
            y = ny;
        }
    }
    if(flag == 0){
        cout<<dice.t<<"\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N>>M>>x>>y>>K;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>map[i][j];
        }
    }
    int tmp;
    for(int i=0; i<K; i++){
        cin>>tmp;
        changeDice(tmp);
    }
    return 0;
}