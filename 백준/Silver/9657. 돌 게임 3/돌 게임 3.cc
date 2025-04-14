#include <iostream>
using namespace std;
int main(){
    int N, arr[1001] = {0, };
    cin>>N;
    arr[1] = arr[3] = arr[4] = arr[5] = 1;
    arr[2] = 0;
    for(int i=6; i<=N; i++){
        if(!arr[i-1] || !arr[i-3] || !arr[i-4]) arr[i] = 1;
    }
    if(arr[N]) cout<<"SK"<<"\n";
    else cout<<"CY"<<"\n";
    return 0;
}