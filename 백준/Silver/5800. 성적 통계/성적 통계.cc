#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int K, N;
    cin>>K;
    for(int k=1; k<=K; k++){
        cin>>N;
        int arr[101] ={0, };
        for(int n=0; n<N; n++){
            cin>>arr[n];
        }
        sort(arr, arr+N);
        int gap = 0;
        for(int n=0; n<N-1; n++){
            if(arr[n+1] - arr[n] > gap){
                gap = arr[n+1] - arr[n];
            }
        }
        cout<<"Class "<<k<<"\n";
        cout<<"Max "<<arr[N-1]<<", "<<"Min "<<arr[0]<<", "<<"Largest gap "<<gap<<"\n";
    }
}