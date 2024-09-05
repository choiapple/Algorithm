#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin>>N;
    double dp[10001] = {0, };
    vector<double> vc(N+1);
    for(int i=1; i<=N; i++){
        cin>>vc[i];
    }
    dp[1] = vc[1];
    double answer = dp[1];
    for(int i=2; i<=N; i++){
        dp[i] = max(vc[i], dp[i-1] * vc[i]);
        answer = max(dp[i], answer);
    }
    cout<<fixed;
    cout.precision(3);
    cout<<answer<<"\n";
    return 0;
}