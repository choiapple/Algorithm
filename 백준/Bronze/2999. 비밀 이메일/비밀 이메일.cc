#include <iostream>
using namespace std;
int main(){
    int R = 0, C = 0, N, k=0;
    char c[102][102];
    string s;
    cin>>s;
    N = s.length();
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            if(i * j == N && i <= j && i >= R){
                R = i;
                C = j;
            }
        }
    }
    for(int i=0; i<C; i++){
        for(int j=0; j<R; j++){
            c[j][i] = s[k++];
        }
    }
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cout<<c[i][j];
        }
    }
}