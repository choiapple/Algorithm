#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, arr[2001] = {0, }, tmp;
    cin>>N>>M;
    for(int n=0; n<N; n++){
        cin>>arr[n];
    }
    for(int n=0; n<N; n++){
        for(int i=0; i<N+M; i++){
            cin>>tmp;
            arr[n] -= tmp;
            arr[i] += tmp;
        }
    }
    for(int i=0; i<N+M; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}