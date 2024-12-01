#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long arr[10001] = {0, }, N, Q, Y, P, X, tmp;
    cin>>N>>Q;
    for(int i=0; i<Q; i++){
        cin>>Y>>P>>X;
        if(Y == 1){
            arr[P] += X;
        }else if(Y == 2){
            tmp = 0;
            for(int j=P; j<=X; j++){
                tmp += arr[j];
            }
            cout<<tmp<<"\n";
        }
    }
}