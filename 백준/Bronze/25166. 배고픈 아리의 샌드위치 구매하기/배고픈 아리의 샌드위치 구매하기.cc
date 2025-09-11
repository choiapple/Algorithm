#include <iostream>
using namespace std;
int main(){
    int S, M, tmp = 512;
    cin>>S>>M;
    while(tmp > 0){
        if(S >= tmp){
            S -= tmp;
        }
        tmp /= 2;
    }
    if(S == 0){
        cout<<"No thanks";
        return 0;
    }
    tmp = 512;
    while(M > 0){
        if(tmp <= M){
            if(S >= tmp){
                S -= tmp;
            }
            M -= tmp;
        }
        tmp /= 2;
    }
    if(S == 0){
        cout<<"Thanks";
    }else{
        cout<<"Impossible";
    }
}