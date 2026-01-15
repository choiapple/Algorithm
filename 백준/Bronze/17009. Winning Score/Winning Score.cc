#include <iostream>
using namespace std;
int main(){
    int a, tmp1 = 0, tmp2 = 0;
    for(int i=3; i>=1; i--){
        cin>>a;
        tmp1 += a * i;
    }
    for(int i=3; i>=1; i--){
        cin>>a;
        tmp2 += a * i;
    }
    if(tmp1 == tmp2){
        cout<<"T";
    }else if(tmp1 > tmp2){
        cout<<"A";
    }else{
        cout<<"B";
    }
}