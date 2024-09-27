#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K, arr[1001] = {0, }, answer = -2147000;
    cin>>N>>K;
    for(int i=1; i<=N; i++){
        cin>>arr[i];
        arr[i] = arr[i] + arr[i-1];
    }
    for(int i=K;  i<=N; i++){
        if(arr[i] - arr[i-K] > answer){
            answer = arr[i] - arr[i-K];
        }
    }
    cout<<answer<<"\n";
    return 0;
}