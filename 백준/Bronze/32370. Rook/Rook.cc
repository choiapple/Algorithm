#include <iostream>
using namespace std;
int main(){
    int a, b, x, y;
    cin>>a>>b;
    cin>>x>>y;
    if(a == 0){
        if(0 < y && y < b){
            cout<<3;
        }else{
            cout<<1;
        }
    }else if(b == 0){
        if(0 < x && x < a){
            cout<<3;
        }else{
            cout<<1;
        }
    }else{
        cout<<2;
    }
}