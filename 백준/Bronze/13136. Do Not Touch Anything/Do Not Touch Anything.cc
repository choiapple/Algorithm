#include <iostream>
using namespace std;
int main(){
    long long R, C, N, r, c;
    cin>>R>>C>>N;
    if(R%N == 0){
        r = R/N;
    }else{
        r = R/N + 1;
    }
    if(C%N == 0){
        c = C/N;
    }else{
        c = C/N + 1;
    }
    cout<<r*c<<"\n";
    return 0;
}