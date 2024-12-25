#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0; i<N*5; i++){
        if(i < N*2){
            for(int j=0; j<N*5; j++){
                if(j < N || j >= N*4){
                    cout<<"@";
                }else{
                    cout<<" ";
                }
            }
            cout<<"\n";
        }else if(i < N*3){
            for(int j=0; j<N*5; j++){
                cout<<"@";
            }
            cout<<"\n";
        }else if(i < N*4){
            for(int j=0; j<N*5; j++){
                if(j < N || j >= N*4){
                    cout<<"@";
                }else{
                    cout<<" ";
                }
            }
            cout<<"\n";
        }else{
            for(int j=0; j<N*5; j++){
                cout<<"@";
            }
            cout<<"\n";
        }
    }
}