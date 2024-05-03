#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N = 1000001;
    int K;
    int answer = 0;
    while(cin>>K){
        if(N == 1000001){
            N = K;
        }else{
            if(N > K){
                answer = 1;
                break;
            }
            N = K;
        }
    }
    if(answer == 1){
        cout<<"Bad"<<"\n";
    }else{
        cout<<"Good"<<"\n";
    }
}