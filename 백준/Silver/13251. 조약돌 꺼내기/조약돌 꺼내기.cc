#include <iostream>
using namespace std;
int main(){
    double M, K, tmp, tmp_sum = 0, total_sum = 0, total = 1, N[51];
    cin>>M;
    for(int m=0; m<M; m++){
        cin>>N[m];
        total_sum += N[m];
    }
    cin>>K;
    for(int m=0; m<M; m++){
        if(N[m] < K) continue;
        tmp = 1;
        for(int k=0; k<K; k++){
            tmp *= (N[m] - k);
        }
        tmp_sum += tmp;
    }
    for(int k=0; k<K; k++){
        total *= (total_sum - k);
    }
    cout<<fixed;
    cout.precision(9);
    cout<<tmp_sum/total<<"\n";
    return 0;
}