#include <iostream>
using namespace std;
int main(){
    int N, M, cur[1001] = {0, }, pre[1001] = {0, }, answer = 0;
    cin>>N>>M;
    for(int n=0; n<N; n++){
        cin>>cur[n];
    }
    for(int m=0; m<M; m++){
        cin>>pre[m];
    }
    for(int m=0; m<M; m++){
        if(pre[m] - cur[m] > answer){
            answer = pre[m] - cur[m];
        }
    }
    cout<<answer<<"\n";
    return 0;
}