#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    int arr[10001] = {0, };
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    sort(arr, arr+N);
    int ret = 1;
    while(ret <= N && arr[ret-1] + 1 > ret){
        ret = arr[ret - 1] + 1;
    }
    cout<<ret<<"\n";
    return 0;
}