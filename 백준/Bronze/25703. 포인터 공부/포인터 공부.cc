#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0; i<=N; i++){
        if(i == 0){
            cout<<"int a;"<<"\n";
        }else{
            cout<<"int ";
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            if(i == 1){
                cout<<"ptr = &a;"<<"\n";
            }else if(i == 2){
                cout<<"ptr"<<i<<" = &"<<"ptr"<<";"<<"\n";
            }else{
                cout<<"ptr"<<i<<" = &"<<"ptr"<<i-1<<";"<<"\n";

            }
        }
    }
}