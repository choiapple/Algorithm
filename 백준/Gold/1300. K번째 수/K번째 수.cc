#include <iostream>
#include <vector>
using namespace std;
long long answer = 0;
void find_value(long long N, long long K, long long s, long long e){
    long long val = (s + e) / 2;
    long long smalls = 0;
    long long temp;
    if(s <= e){
        for(int i=1; i<=N; i++){
        temp = val/i;
        if(temp > N) temp = N;
        smalls += temp;
        }
        if(s == e){
            answer = s;
            return;
        }
        if(smalls < K){
            find_value(N, K, val+1, e);
        }else{
            find_value(N, K, s, val);
        }
    }
}
int main(){
    long long N, K;
    cin>>N>>K;
    find_value(N, K, 1, N*N);
    cout<<answer<<"\n";
    return 0;
}