#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[51] = {0, }, hong, idx;
    for(int i=1; i<=50; i++){
        cin>>arr[i];
    }
    cin>>hong;
    for(int i=1; i<=50; i++){
        if(hong == arr[i]){
            idx = i;
            break;
        }
    }
    if(idx >= 1 && idx <=5){
        cout<<"A+"<<"\n";
    }else if(idx >= 6 && idx <= 15){
        cout<<"A0"<<"\n";
    }else if(idx >= 16 && idx <= 30){
        cout<<"B+"<<"\n";
    }else if(idx >= 31 && idx <= 35){
        cout<<"B0"<<"\n";
    }else if(idx >= 36 && idx <= 45){
        cout<<"C+"<<"\n";
    }else if(idx >= 46 && idx <= 48){
        cout<<"C0"<<"\n";
    }else{
        cout<<"F"<<"\n";
    }
}