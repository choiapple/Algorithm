#include <iostream>
using namespace std;
int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, nx, ny, cnt, flag = 0;
    string map[11], check[11];
    char answer[11][11];
    cin>>N;
    for(int ni=0; ni<N; ni++){
        cin>>map[ni];
    }
    for(int ni=0; ni<N; ni++){
        cin>>check[ni];
    }
    for(int ni=0; ni<N; ni++){
        for(int nj=0; nj<N; nj++){
            if(check[ni][nj] != 'x'){
                answer[ni][nj] = '.';
                continue;
            }
            if(check[ni][nj] == 'x' && map[ni][nj] == '*'){
                flag = 1;
                continue;
            }
            cnt = 0;
            for(int k=0; k<8; k++){
                ny = ni + dy[k];
                nx = nj + dx[k];
                if(ny < 0 || ny >= N || nx < 0 || nx >= N) continue;
                if(map[ny][nx] == '*') cnt++;
            }
            answer[ni][nj] = cnt + '0';
        }
    }
    for(int ni=0; ni<N; ni++){
        for(int nj=0; nj<N; nj++){
            if(flag == 1 && map[ni][nj] == '*'){
                cout<<'*';
            }else{
                cout<<answer[ni][nj];
            }
        }
        cout<<"\n";
    }
    return 0;
}