#include <iostream>
using namespace std;
string map[51];
int dx[4] = {0, 0, 1, 1};
int dy[4] = {0, 1, 1, 0};
int check(int r, int c, int x){
    int re = 0;
    for(int i=0; i<r-1; i++){
        for(int j=0; j<c-1; j++){
            int flag = 0;
            int cnt = 0;
            for(int k=0; k<4; k++){
                int ni = i + dx[k];
                int nj = j + dy[k];
                if(map[ni][nj] == '#'){
                    flag = 1;
                    break;
                }else if(map[ni][nj] == 'X'){
                    cnt++;
                }
            }
            if(flag == 0 && cnt == x){
                re++;
            }
        }
    }
    return re;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int R, C;
    cin>>R>>C;
    for(int i=0; i<R; i++){
        cin>>map[i];
    }
    for(int i=0; i<=4; i++){
        cout<<check(R, C, i)<<"\n";
    }
    return 0;
}