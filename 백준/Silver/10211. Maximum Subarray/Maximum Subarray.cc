#include <iostream>
#include <cmath>
#define INT_MIN -987654321
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, arr[1001], dp, maximum_subarray;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N;
        dp = 0;
        maximum_subarray = INT_MIN;
        for(int n=0; n<N; n++){
            cin>>arr[n];
            dp = max(arr[n] + dp, arr[n]);
            maximum_subarray = max(dp, maximum_subarray);
        }
        cout<<maximum_subarray<<"\n";
    }
    return 0;
}