#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, answer = 0;
    int arr[100001] = {0, };
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    for(int i=-99; i<100; i++){
        int dp[100001] = {0, };
        for(int j=0; j<N; j++){
            if(arr[j] - i < 1 || arr[j] - i > 100){
                dp[arr[j]] = 1;
            }else{
                dp[arr[j]] = dp[arr[j] - i] + 1;
            }
            answer = max(answer, dp[arr[j]]);
        }
    }
    cout<<answer<<"\n";
}