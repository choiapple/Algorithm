#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N, arr[200001] = {0, }, tmp1 = 0, tmp2 = 0;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>arr[n];
    }
    sort(arr, arr+N);
    for(int n=0; n<N; n++){
        if(n < N/2){
            tmp1 += arr[n];
        }else{
            tmp2 += arr[n];
        }
    }
    cout<<tmp1<<" "<<tmp2<<"\n";
    return 0;
}