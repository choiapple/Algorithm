#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int M, N, U, L, R, D;
    char map[100][100];
    cin>>M>>N;
    cin>>U>>L>>R>>D;
    for(int m=0; m<M+U+D; m++){
        for(int n=0; n<N+L+R; n++){
            if(m%2 == 0){
                if(n%2 == 0) map[m][n] = '#';
                else map[m][n] = '.';
            }else{
                if(n%2 == 0) map[m][n] = '.';
                else map[m][n] = '#';
            }
        }
    }
    for(int m=U; m<U+M; m++){
        for(int n=L; n<L+N; n++){
            cin>>map[m][n];
        }
    }
    for(int m=0; m<M+U+D; m++){
        for(int n=0; n<N+L+R; n++){
            cout<<map[m][n];
        }
        cout<<"\n";
    }
    return 0;
}