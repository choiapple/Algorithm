#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    char map[51][51];
    cin>>N>>M;
    for(int n=0; n<N; n++){
        for(int m=0; m<M; m++){
            cin>>map[n][m];
        }
    }
    for(int n=0; n<N; n++){
        for(int m=0; m<M/2; m++){
            if(map[n][m] != '.'){
                map[n][M-1-m] = map[n][m];
            }
            if(map[n][M-1-m] != '.'){
                map[n][m] = map[n][M-1-m];
            }
        }
    }
    for(int n=0; n<N; n++){
        for(int m=0; m<M; m++){
            cout<<map[n][m];
        }
        cout<<"\n";
    }
}