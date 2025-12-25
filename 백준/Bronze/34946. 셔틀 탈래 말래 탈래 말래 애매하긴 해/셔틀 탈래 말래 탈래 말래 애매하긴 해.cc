#include <iostream>
using namespace std;
int main(){
    int A, B, C, D;
    cin>>A>>B>>C>>D;
    if(A+B <= D && C <= D){
        cout<<"~.~";
    }else if(A+B <= D && C > D){
        cout<<"Shuttle";
    }else if(C <= D && A+B > D){
        cout<<"Walk";
    }else{
        cout<<"T.T";
    }
    return 0;
}