#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    if(N < 206) cout<<1;
    else if(N < 218) cout<<2;
    else if(N < 229) cout<<3;
    else cout<<4;
}