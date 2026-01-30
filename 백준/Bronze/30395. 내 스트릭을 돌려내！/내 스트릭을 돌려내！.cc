#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, arr[1001] = {0, }, max = 0, cur = 0, f = -2;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>arr[n];
        if(arr[n] > 0) cur++;
        else if(n - f >= 2) f = n;
        else cur = 0;
        if(max < cur) max = cur;
    }
    cout<<max;
    return 0;
}