#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[1001] = {0, };
    int dp[1001] = {0, };
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    dp[0] = arr[0];
    for(int i=1; i<N; i++){
        dp[i] = arr[i];
        for(int j=i-1; j>=0; j--){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }
        }
    }
    int answer = 0;
    for(int i=0; i<N; i++){
        if(answer < dp[i]){
            answer = dp[i];
        }
    }
    cout<<answer<<"\n";
    return 0;
}