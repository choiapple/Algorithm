#include <iostream>
using namespace std;
int main(){
    int N, K;
    cin>>N>>K;
    N *= 1000;
    if(K*7000 <= N){
        cout<<K*7000<<"\n";
    }else if(K*3500 <= N){
        cout<<K*3500<<"\n";
    }else if(K*1750 <= N){
        cout<<K*1750<<"\n";
    }else{
        cout<<0<<"\n";
    }
}