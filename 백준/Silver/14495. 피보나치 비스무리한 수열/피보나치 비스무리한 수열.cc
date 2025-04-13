#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    long long arr[117] = {0, };
    cin>>N;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    for(int i=4; i<=N; i++){
        arr[i] = arr[i-1] + arr[i-3];
    }
    cout<<arr[N]<<"\n";
    return 0;
}