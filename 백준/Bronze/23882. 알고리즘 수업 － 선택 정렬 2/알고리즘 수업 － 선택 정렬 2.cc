#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K, arr[10001] = {0, }, tmp = 0, idx, answer = 0;
    cin>>N>>K;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    for(int i=0; i<N; i++){
        tmp = 0;
        for(int j=0; j<N-i; j++){
            if(tmp < arr[j]){
                tmp = arr[j];
                idx = j;
            }
        }
        if(idx != N - i - 1){
            answer++;
            arr[idx] = arr[N - i - 1];
            arr[N-i-1] = tmp;
        }
        if(answer == K){
            break;
        }
    }
    if(answer < K){
        cout<<-1<<"\n";
    }else{
        for(int i=0; i<N; i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}