#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, arr[1001] = {0, }, tmp[1001] = {0, };
    cin>>N;
    for(int n=1; n<=N; n++){
        cin>>arr[n];
    }
    tmp[1] = arr[1];
    for(int n=2; n<=N; n++){
        tmp[n] = arr[n];
        for(int i=1; i<=n/2; i++){
            tmp[n] = max(tmp[n], tmp[n-i] + tmp[i]);
        }
    }
    cout<<tmp[N]<<"\n";
    return 0;
}