#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a, int b){
    return a > b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K, S;
    int tmp = 0;
    int answer = 0;
    int arr[10001] = {0, };
    cin>>N>>K>>S;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    sort(arr, arr+N, cmp);
    for(int i=0; i<N; i++){
        if(tmp < K * S){
            tmp += arr[i];
        }
        if(tmp >= K*S){
            answer = i+1;
            break;
        }
    }
    cout<<answer<<"\n";
}