#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    long long X, tmp;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>X;
        tmp = sqrt(X);
        if(tmp * tmp == X){
            cout<<1<<" ";
        }else{
            cout<<0<<" ";
        }
    }
    return 0;
}