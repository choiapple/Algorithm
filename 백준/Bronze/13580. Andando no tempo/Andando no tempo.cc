#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int A, B, C;
    cin>>A>>B>>C;
    if(abs(A-B) == 0){
        cout<<"S"<<"\n";
    }else if(abs(A-C) == 0){
        cout<<"S"<<"\n";
    }else if(abs(B-C) == 0){
        cout<<"S"<<"\n";
    }else if(abs(A+B-C) == 0){
        cout<<"S"<<"\n";
    }else if(abs(A+C-B) == 0){
        cout<<"S"<<"\n";
    }else if(abs(B+C-A) == 0){
        cout<<"S"<<"\n";
    }else{
        cout<<"N"<<"\n";
    }
}