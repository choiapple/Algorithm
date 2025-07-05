#include <iostream>
using namespace std;
int main(){
    int T, arr[32] = {0, }, a, b, K;
    cin>>T;
    for(int t=0; t<T; t++){
         cin>>a>>b;
         for(int i=a; i<b; i++){
             arr[i]++;
         }
    }
    cin>>K;
    for(int i=1; i<32; i++){
        if(arr[i] > K){
            cout<<0<<"\n";
            return 0;
        }
    }
    cout<<1<<"\n";
    return 0;
}