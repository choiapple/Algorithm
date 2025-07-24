#include <iostream>
using namespace std;
int main(){
    long long N, X, S, c, p, flag = 0;
    cin>>N;
    cin>>X>>S;
    for(int i=0; i<N; i++){
        cin>>c>>p;
        if(c <= X && p > S){
            flag = 1;
        }
    }
    if(flag == 1) cout<<"YES";
    else cout<<"NO";
    return 0;
}