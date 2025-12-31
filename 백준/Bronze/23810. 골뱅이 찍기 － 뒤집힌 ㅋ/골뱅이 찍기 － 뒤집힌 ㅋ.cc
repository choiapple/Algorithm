#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int n=0; n<N; n++){
        for(int i=0; i<N*5; i++){
            cout<<"@";
        }
        cout<<"\n";
    }
    for(int n=0; n<N; n++){
        for(int i=0; i<N; i++){
            cout<<"@";
        }
        cout<<"\n";
    }
    for(int n=0; n<N; n++){
        for(int i=0; i<N*5; i++){
            cout<<"@";
        }
        cout<<"\n";
    }
    for(int n=0; n<N*2; n++){
        for(int i=0; i<N; i++){
            cout<<"@";
        }
        cout<<"\n";
    }
}