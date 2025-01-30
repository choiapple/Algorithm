#include <iostream>
using namespace std;
int main(){
    int N, K, sum, a;
    cin>>N>>K;
    sum = K * (K+1) / 2;
    if(sum > N){
        cout<<-1<<"\n";
        return 0;
    }
    a = N - sum;
    if(a%K == 0) cout<<K-1<<"\n";
    else cout<<K<<"\n";
    return 0;
}