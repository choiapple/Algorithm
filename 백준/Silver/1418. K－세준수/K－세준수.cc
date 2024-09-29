#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N, K, cnt = 0, arr[100010] = {0, };
    cin>>N>>K;
    for(int i=2; i<=N; i++){
        if(arr[i]) continue;
        for(int j=i; j<=N; j+=i){
            arr[j] = max(arr[j], i);
        }
    }
    for(int i=1; i<=N; i++){
        if(arr[i] <= K) cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}