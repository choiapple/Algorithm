#include <iostream>
using namespace std;
int main(){
    int N, tmp;
    char map[11][21], c;
    for(int i=0; i<10; i++){
        for(int j=1; j<=20; j++){
            map[i][j] = '.';
        }
    }
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>c>>tmp;
        int A = c - 'A';
        map[A][tmp] = 'o';
    }
    for(int i=0; i<10; i++){
        for(int j=1; j<=20; j++){
            cout<<map[i][j];
        }
        cout<<"\n";
    }
}