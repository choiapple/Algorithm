#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K, pre, cur, answer = 0, flag = 0;
    cin>>N>>K;
    cin>>pre;
    if(N == 1){
        cout<<0;
        return 0;
    }
    for(int i=1; i<N; i++){
        cin>>cur;
        if(pre < cur){
            pre = cur;
            continue;
        }
        if(pre < cur+K){
            pre = cur + K;
            answer++;
            continue;
        }
        flag = 1;
        break;
    }
    if(flag == 0) cout<<answer;
    else cout<<-1;
    return 0;
}