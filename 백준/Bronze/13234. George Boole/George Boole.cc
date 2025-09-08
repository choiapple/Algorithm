#include <iostream>
using namespace std;
int main(){
    bool bv1, bv2;
    string v1, v2, a;
    cin>>v1>>a>>v2;
    if(v1 == "true"){
        bv1 = true;
    }else{
        bv1 = false;
    }
    if(v2 == "true"){
        bv2 = true;
    }else{
        bv2 = false;
    }
    if(a == "AND"){
        if(bv1 && bv2){
            cout<<"true"<<"\n";
        }else{
            cout<<"false"<<"\n";
        }
    }else{
        if(bv1 || bv2){
            cout<<"true"<<"\n";
        }else{
            cout<<"false"<<"\n";
        }
    }
    return 0;
}