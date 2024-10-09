#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int answer = 0, N, M, S, E, c[101] = {0, }, bus[101][101] = {0, };
    cin>>N>>M;
    for(int i=0; i<M; i++){
        cin>>c[i];
    }
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cin>>bus[i][j];
        }
    }
    for(int i=0; i<M-1; i++){
        S = c[i];
        E = c[i+1];
        answer += bus[S][E];
    }
    cout<<answer<<"\n";
    return 0;
}