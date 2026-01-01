#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[100001] = {0, }, N, K, answer = 0, A, B;
    cin>>N>>K;
    for(int n=0; n<N; n++){
        cin>>A>>B;
        if(A >= B){
            arr[n] = 0;
        }else{
            arr[n] = B - A;
        }
    }
    sort(arr, arr+N);
    cout<<arr[K-1];
    return 0;
}