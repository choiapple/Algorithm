#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, x;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N;
        x = sqrt(N);
        if(pow(x, 2) == N){
            cout<<1<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }
    return 0;
}