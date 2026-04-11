#include <iostream>
using namespace std;
int main(){
    int N, M;
    cin>>N>>M;
    for(int m=1; m<=M; m++){
        cout<<0<<" "<<m<<"\n";
    }
    for(int i=M+1; i<N; i++){
        cout<<i-1<<" "<<i<<"\n";
    }
}