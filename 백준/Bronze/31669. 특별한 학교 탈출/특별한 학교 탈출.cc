#include <iostream>
using namespace std;
int main(){
    int N, M, answer = -1, flag = 0;
    char arr[101][101];
    cin>>N>>M;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<M; i++){
        flag = 0;
        for(int j=0; j<N; j++){
            if(arr[j][i] == 'O'){
                flag = 1;
            }
        }
        if(flag == 0){
            answer = i;
            break;
        }
    }
    if(answer == -1) cout<<"ESCAPE FAILED";
    else cout<<answer+1;
    return 0;
}