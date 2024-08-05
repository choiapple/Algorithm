#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    if(N == 1){
        cout<<"*"<<"\n";
        return 0;
    }
    for(int i=1; i<=N; i++){
        for(int j=i; j<N; j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j=1; j<=(i-1)*2-1; j++){
            cout<<" ";
        }
        if(i > 1){
            cout<<"*"<<"\n";
        }else{
            cout<<"\n";
        }
    }
}