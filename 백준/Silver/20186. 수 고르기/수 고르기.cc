#include <iostream>
#include <algorithm>
using namespace std;
int N, K, arr[5001] = {0, }, answer = 0, cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N>>K;
    cnt = N - 1;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    sort(arr, arr+N);
    for(int i=0; i<K; i++){
        answer += arr[cnt--] - i;
    }
    cout<<answer<<"\n";
    return 0;
}