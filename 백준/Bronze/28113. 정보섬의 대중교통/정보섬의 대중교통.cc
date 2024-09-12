#include <iostream>
using namespace std;
int main(){
    int N, A, B;
    cin>>N>>A>>B;
    if(N > B){
        cout<<"Bus"<<"\n";
    }else if(B > A){
        cout<<"Bus"<<"\n";
    }else if(N <= B && B < A){
        cout<<"Subway"<<"\n";
    }else if(N <= B && B == A){
        cout<<"Anything"<<"\n";
    }
}