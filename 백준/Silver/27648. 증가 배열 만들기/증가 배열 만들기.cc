#include <iostream>
using namespace std;
int main(){
    int N, M, K;
    cin>>N>>M>>K;
    if(N + M - 1 > K){
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<"\n";
    for(int i=1; i<=N; i++){
        for(int j=i; j<i+M; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}