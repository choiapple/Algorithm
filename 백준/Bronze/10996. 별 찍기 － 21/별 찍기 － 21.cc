#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        for(int j=1; j<=N; j++){
            if(j%2==1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<"\n";
        for(int j=1; j<=N; j++){
            if(j%2==1){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }
}