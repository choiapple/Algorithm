#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long N;
    while(true){
        cin>>N;
        if(N == 0) break;
        if(N <= 1000000){
            cout<<N<<"\n";
        }else if(N <= 5000000){
            cout<<N*9/10<<"\n";
        }else{
            cout<<N*8/10<<"\n";
        }
    }
}