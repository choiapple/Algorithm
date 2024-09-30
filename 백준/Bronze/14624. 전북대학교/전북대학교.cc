#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    if(N % 2 == 0){
        cout<<"I LOVE CBNU"<<"\n";
    }else{
        for(int i=0; i<N; i++){
            cout<<"*";
        }
        cout<<"\n";
        for(int i=0; i<N-1; i++){
            for(int j=0; j<N; j++){
                if(N / 2 - i == j){
                    cout<<"*";
                    if(i == 0){
                        break;
                    }
                }else if(N / 2 + i == j){
                    cout<<"*";
                    break;
                }else{
                    cout<<" ";
                }
            }
            cout<<"\n";
        }
    }
}