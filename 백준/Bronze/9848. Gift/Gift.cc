#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K, pre, cur, answer = 0;
    cin>>N>>K;
    cin>>pre;
    for(int n=1; n<N; n++){
        cin>>cur;
        if(pre - cur >= K){
            answer++;
        }
        pre = cur;
    }
    cout<<answer<<"\n";
}