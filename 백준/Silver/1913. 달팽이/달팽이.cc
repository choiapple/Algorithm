#include <iostream>
using namespace std;
int main(){
    int N, K, map[1000][1000] = {0, }, H, Z, X, Y;
    cin>>N>>K;
    H = N / 2;
    Z = N * N;
    for(int h=0; h<=H; h++){
        for(int i=h; i<N-h; i++){
            map[i][h] = Z--;
        }
        for(int i=h+1; i<N-h; i++){
            map[N-h-1][i] = Z--;
        }
        for(int i=N-h-2; i>=h; i--){
            map[i][N-h-1] = Z--;
        }
        for(int i=N-h-2; i>=h+1; i--){
            map[h][i] = Z--;
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<map[i][j]<<" ";
            if(K == map[i][j]){
                X = i;
                Y = j;
            }
        }
        cout<<"\n";
    }
    cout<<X+1<<" "<<Y+1<<"\n";
    return 0;
}