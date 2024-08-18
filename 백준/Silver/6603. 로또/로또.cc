#include <iostream>
using namespace std;
int K, arr[14], tmp[14];
void fn(int n, int idx, int tmp[14]){
    if(n == 6){
        for(int i=0; i<n; i++){
            cout<<tmp[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=idx; i<K; i++){
        tmp[n] = arr[i];
        fn(n+1, i+1, tmp);
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(true){
        cin>>K;
        if(K == 0) break;
        for(int i=0; i<K; i++){
            cin>>arr[i];
        }
        fn(0, 0, tmp);
        cout<<"\n";
    }
    
}