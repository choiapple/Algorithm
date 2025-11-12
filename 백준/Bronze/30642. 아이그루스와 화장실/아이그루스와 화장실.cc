#include <iostream>
using namespace std;
int main(){
    int N, K;
    string s;
    cin>>N>>s>>K;
    if(s == "annyong"){
        if(K%2 == 1){
            cout<<K;
        }else{
            if(K - 1 >= 1){
                cout<<K-1;
            }else{
                cout<<K+1;
            }
        }
    }else{
        if(K%2 == 0){
            cout<<K;
        }else{
            if(K - 1 >= 1){
                cout<<K-1;
            }else{
                cout<<K+1;
            }
        }
    }
}