#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long N, M, a, K, min_n, max_n;
    cin>>N>>M>>a>>K;
    if(a - K >= N - 1) max_n = N;
    else max_n = a - K + 1;
    
    if((a - K) % M == 0) min_n = (a - K) / M + 1;
    else min_n = (a - K) / M + 2;
    cout<<max_n<<" "<<min_n<<"\n";
    return 0;
}