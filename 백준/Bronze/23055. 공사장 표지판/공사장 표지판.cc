#include <iostream>
using namespace std;
int main(){
    int N;
    char c[30][30];
    cin>>N;
    for(int i=0; i<N; i++){
        c[0][i] = '*';
        c[N-1][i] = '*';
        c[i][0] = '*';
        c[i][N-1] = '*';
    }
    for(int i=0; i<N; i++){
        c[i][i] = '*';
        c[i][N-1-i] = '*';
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(c[i][j] == '*'){
                cout<<c[i][j];
            }else{
                cout<<' ';
            }
        }
        cout<<"\n";
    }
    return 0;
}