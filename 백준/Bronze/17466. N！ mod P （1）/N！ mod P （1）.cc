#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long N, P, tmp = 1;
    cin>>N>>P;
    for(int i=1; i<=N; i++){
        tmp = (i%P) * (tmp);
        tmp %= P;
    }
    cout<<tmp<<"\n";
}