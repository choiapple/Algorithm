#include <iostream>
using namespace std;
int main(){
    long long N, arr[36];
    cin>>N;
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    for(int i=3; i<=N; i++){
        arr[i] = 0;
        for(int j=0; j<i; j++){
            arr[i] += arr[j] * arr[i-j-1];
        }
    }
    cout<<arr[N]<<"\n";
}