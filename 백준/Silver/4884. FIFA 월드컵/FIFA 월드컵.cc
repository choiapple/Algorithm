#include <iostream>
using namespace std;
int main(){
    long long G, T, A, D, X, Y;
    while(true){
        cin>>G>>T>>A>>D;
        if(G == -1 && T == -1 && A == -1 && D == -1) break;
        X = T * (T-1) / 2 * G;
        Y = A * G + D;
        long long tmp = 1;
        while(true){
            if(tmp < Y){
                tmp *= 2;
            }else{
                break;
            }
        }
        X += tmp - 1;
        cout<<G<<"*"<<A<<"/"<<T<<"+"<<D<<"="<<X<<"+"<<tmp - Y<<"\n";
    }
}