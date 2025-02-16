#include <iostream>
using namespace std;
int main(){
    int N, K, sum = 0;
    cin>>N>>K;
    sum += N;
    for(int i=0; i<K; i++){
        N *= 10;
        sum += N;
    }
    cout<<sum<<"\n";
    return 0;
}