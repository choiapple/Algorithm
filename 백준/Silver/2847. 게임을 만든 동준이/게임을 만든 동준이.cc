#include <iostream>
using namespace std;
int main(){
    int N;
    int arr[101] = {0, };
    int cnt = 0;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>arr[n];
    }
    for(int n=N-2; n>=0; n--){
        if(arr[n] >= arr[n+1]){
            cnt += arr[n] - arr[n+1] +1;
            arr[n] = arr[n+1] - 1;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}