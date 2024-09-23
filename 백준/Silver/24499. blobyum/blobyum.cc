#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int K, N, tmp, answer = 0;
    vector<int> vc;
    vector<int> vc_sum;
    cin>>K>>N;
    vc.push_back(0);
    vc_sum.push_back(0);
    for(int i=1; i<=K; i++){
        cin>>tmp;
        vc.push_back(tmp);
        vc_sum.push_back(tmp + vc_sum[i-1]);
    }
    for(int i=1; i<=N-1; i++){
        vc_sum.push_back(vc[i]+vc_sum[K+i-1]);
    }
    for(int i=N; i<=K+N; i++){
        if(answer < vc_sum[i] - vc_sum[i-N]){
            answer = vc_sum[i] - vc_sum[i-N];
        }
    }
    cout<<answer<<"\n";
    return 0;
}