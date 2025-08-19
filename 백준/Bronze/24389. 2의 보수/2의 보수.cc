#include <iostream>
using namespace std;
int main(){
    long long N, M;
    int answer = 0;
    cin>>N;
    M = -N;
    for(int i=0; i<32; i++){
        if((M&1) != (N&1)) answer++;
        N>>=1;
        M>>=1;
    }
    cout<<answer<<"\n";
    return 0;
}