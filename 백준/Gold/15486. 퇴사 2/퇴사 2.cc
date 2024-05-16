#include <iostream>
#include <cmath>
using namespace std;
int N, answer;
int DP[1500010];
int arr[1500010][2];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    for(int i=1; i<=N; i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    int cur = 0;
    for(int i=1; i<=N+1; i++){
        cur = max(cur, DP[i]);
        if(i + arr[i][0] > N+1) continue;
        DP[i+arr[i][0]] = max(cur + arr[i][1], DP[i + arr[i][0]]);
    }
    answer = cur;
    cout<<answer<<"\n";
}