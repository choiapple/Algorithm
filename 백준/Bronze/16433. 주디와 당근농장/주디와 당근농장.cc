#include <iostream>
using namespace std;
int main(){
    int N, R, C;
    cin>>N>>R>>C;
    int arr[100][100] = {0, };
    int k = 0;
    for(int i=1; i<=N; i++){
        if(k == 0){
            for(int j=1; j<=N; j+=2){
                arr[i][j] = 1;
            }
            k = 1;
        }else{
            for(int j=2; j<=N; j+=2){
                arr[i][j] = 1;
            }
            k = 0;
        }
    }
    if(arr[R][C] == 1){
        for(int i=1; i<=N; i++){
            for(int j=1; j<=N; j++){
                if(arr[i][j] == 0){
                    cout<<".";
                }else{
                    cout<<"v";
                }
            }
            cout<<"\n";
        }
    }else{
        for(int i=1; i<=N; i++){
            for(int j=1; j<=N; j++){
                if(arr[i][j] == 0){
                    cout<<"v";
                }else{
                    cout<<".";
                }
            }
            cout<<"\n";
        }
    }
}