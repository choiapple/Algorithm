#include <iostream>
using namespace std;
int main(){
    int N, M;
    cin>>N>>M;
    string arr[11];
    string arr2[22];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    for(int i=0; i<N; i++){
        cin>>arr2[i];
    }
    int flag = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<2*M; j+=2){
            if(arr[i][j/2] != arr2[i][j] || arr[i][j/2] != arr2[i][j+1]){
                flag = 1;
            }
        }
    }
    if(flag == 1){
        cout<<"Not Eyfa"<<"\n";
    }else{
        cout<<"Eyfa"<<"\n";
    }
    
}