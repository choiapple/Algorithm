#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, tmp2;
    string map[1001];
    char answer[1001][1001];
    int dx[9] = {-1, 0, 1, 1, 1, 0, -1, -1};
    int dy[9] = {-1, -1, -1, 0, 1, 1, 1, 0};
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>map[i];
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            answer[i][j] = '0';
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(map[i][j] != '.'){
               answer[i][j] = '*';
               tmp = map[i][j] - '0';
               for(int k=0; k<9; k++){
                   int ny = i + dy[k];
                   int nx = j + dx[k];
                   if(ny >= N || ny < 0 || nx >= N || nx < 0) continue;
                   if(answer[ny][nx] == '*' || answer[ny][nx] == 'M') continue;
                   tmp2 = (answer[ny][nx] - '0') + (map[i][j] - '0');
                   if(tmp2 >= 10){
                       answer[ny][nx] = 'M';
                   }else{
                       answer[ny][nx] = tmp2 + '0';
                   }
               }
            }
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<answer[i][j];
        }
        cout<<"\n";
    }
}