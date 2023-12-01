#include <iostream>
using namespace std;
int N, M;
bool chk[205][205];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N>>M;
    for(int i = 0; i < M; i++){
        int p, q;
        cin>>p>>q;
        chk[p][q] = true;
        chk[q][p] = true;
    }
    int answer = 0;
    for(int i = 1; i<= N; i++){
        for(int j = i + 1; j <= N; j++){
            if(chk[i][j]) continue;
            for(int k = j + 1; k <= N; k++){
                if(chk[i][k] || chk[j][k]) continue;
                answer++;
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}