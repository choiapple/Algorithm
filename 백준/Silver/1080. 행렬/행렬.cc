#include <iostream>
using namespace std;
int N, M, A[51][51], B[51][51], answer = 0;
void change(int y, int x){
    for(int i=y; i<y+3; i++){
        for(int j=x; j<x+3; j++){
            if(A[i][j] == 0){
                A[i][j] = 1;
            }else{
                A[i][j] = 0;
            }
        }
    }
}
int main(){
    cin>>N>>M;
    string s;
    for(int i=0; i<N; i++){
        cin>>s;
        for(int j=0; j<M; j++){
            A[i][j] = s[j] - '0';
        }
    }
    for(int i=0; i<N; i++){
        cin>>s;
        for(int j=0; j<M; j++){
            B[i][j] = s[j] - '0';
        }
    }
    for(int i=0; i<=N-3; i++){
        for(int j=0; j<=M-3; j++){
            if(A[i][j] != B[i][j]){
                change(i, j);
                answer++;
            }
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(A[i][j] != B[i][j]){
                cout<<-1<<"\n";
                return 0;
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}