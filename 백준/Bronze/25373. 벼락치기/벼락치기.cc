#include <iostream>
using namespace std;
int main(){
    long long N;
    cin>>N;
    if(N == 1) cout<<1;
    else if(N <= 3) cout<<2;
    else if(N <= 6) cout<<3;
    else if(N <= 10) cout<<4;
    else if(N <= 15) cout<<5;
    else if(N <= 21) cout<<6;
    else cout<<(N-22)/7 + 7;
}