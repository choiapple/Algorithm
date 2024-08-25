#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long N, A=0, B=0, tmp;
    cin>>N;
    for(int i=1; i<N; i++){
        B += i;
    }
    for(int i=1; i<=N; i++){
        cin>>tmp;
        A += tmp;
    }
    cout<<A-B<<"\n";
    return 0;
}