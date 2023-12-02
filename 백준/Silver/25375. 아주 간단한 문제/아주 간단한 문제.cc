#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long Q, a, b;
    cin>>Q;
    for(int i=0; i<Q; i++){
        cin>>a>>b;
        if(b/a >= 2 && b%a == 0){
            cout<<1<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }
}