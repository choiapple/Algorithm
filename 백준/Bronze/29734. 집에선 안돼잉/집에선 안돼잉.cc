#include <iostream>
using namespace std;
int main(){
    long long N, M, T, S, zip = 0, dok = 0;
    cin>>N>>M;
    cin>>T>>S;
    if(M%8 == 0){
        dok += T + M + ((M/8)-1) * (2 * T + S);
    }else{
        dok += T + M + (M/8) * (2 * T + S);
    }
    
    if(N%8 == 0){
        zip += N + ((N/8)-1) * S;
    }else{
        zip += N + (N/8) * S;
    }
    if(zip < dok){
        cout<<"Zip"<<"\n"<<zip<<"\n";
    }else{
        cout<<"Dok"<<"\n"<<dok<<"\n";
    }
}