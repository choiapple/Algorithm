#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N*5; j++){
            cout<<"@";
        }
        cout<<"\n";
    }
    for(int i=0; i<N*4; i++){
        for(int j=0; j<N; j++){
            cout<<"@";
        }
        cout<<"\n";
    }
}