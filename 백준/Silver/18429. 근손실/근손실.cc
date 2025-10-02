#include <iostream>
using namespace std;
int answer = 0, arr[10] = {0, }, N, K, visit[10] = {0, };
void re(int n, int we){
    if(n == N){
        answer++;
        return;
    }
    for(int i=0; i<N; i++){
        if(visit[i] != 0) continue;
        if(we - K + arr[i] >= 500){
            visit[i] = 1;
            re(n+1, we - K + arr[i]);
            visit[i] = 0;
        }
    }
    return;
}
int main(){
    cin>>N>>K;
    for(int n=0; n<N; n++){
        cin>>arr[n];
    }
    re(0, 500);
    cout<<answer<<"\n";
    return 0;
}