#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, arr[200001];
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>arr[n];
    }
    int maxi = arr[0], mini = arr[0], m = arr[0];
    for(int n=0; n<N; n++){
        if(maxi < arr[n]) maxi = arr[n];
        if(maxi - mini < arr[n] - m){
            cout<<arr[n] - m<<" ";
            maxi = arr[n];
            mini = m;
        }else{
            cout<<maxi - mini<<" ";
        }
        if(m > arr[n]) m = arr[n];
    }
}