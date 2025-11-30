#include <iostream>
using namespace std;
int N;
int dy[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
char map[101][101];
string mobis = "MOBIS";
bool check(int x, int y, int dist){
    for(int i=1; i<5; i++){
        int nx = x + dx[dist];
        int ny = y + dy[dist];
        if(nx < 0 || nx >= N || ny < 0 || ny >= N){
            return false;
        }
        if(map[nx][ny] != mobis[i]){
            return false;
        }
        x = nx;
        y = ny;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int answer = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>map[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(map[i][j] != 'M') continue;
            for(int d=0; d<8; d++){
                if(check(i, j, d)){
                   answer++; 
                }
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}