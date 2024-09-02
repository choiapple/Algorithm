#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, K, tmp[1001] = {0, }, answer = 0;
    cin>>N>>M;
    for(int i=0; i<M; i++){
        cin>>K;
        for(int j=K; j <= N; j+=K){
            tmp[j] = 1;
        }
    }
    for(int i=1; i<=N; i++){
        if(tmp[i] == 1){
            answer += i;
        }
    }
    cout<<answer<<"\n";
    return 0;
}