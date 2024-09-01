#include <iostream>
#include <string>
using namespace std;
int main(){
    string A, B, C = "", D = "";
    int tmp;
    cin>>A>>B;
    for(int i=0; i<8; i++){
        C += A[i];
        C += B[i];
    }
    while(true){
        if(C.length() == 2) break;
        D = "";
        for(int i=0; i<C.length()-1; i++){
            tmp = ((C[i] - '0') + (C[i+1] - '0'))%10;
            D += to_string(tmp);
        }
        C = D;
    }
    cout<<C<<"\n";
    return 0;
}