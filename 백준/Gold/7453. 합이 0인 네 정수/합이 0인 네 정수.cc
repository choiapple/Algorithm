#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
int A[4001], B[4001], C[4001], D[4001];
vector<long long> sum;
void solve() {
    long long ans = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            sum.push_back(A[i] + B[j]);
        }
    }
    sort(sum.begin(), sum.end());
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            long long Sum = -(C[i] + D[j]);
            long long low = lower_bound(sum.begin(), sum.end(), Sum) - sum.begin();
            long long high = upper_bound(sum.begin(), sum.end(), Sum) - sum.begin();
            if(Sum == sum[low]) ans += (high - low);
        }
    }
    cout<<ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>A[n]>>B[n]>>C[n]>>D[n];
    }
    solve();
    return 0;
}