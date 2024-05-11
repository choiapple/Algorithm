#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int R, C, ZR, ZC;
    cin>>R>>C>>ZR>>ZC;
    string s[51];
    for(int i=0; i<R; i++){
        cin>>s[i];
    }
    char c[500][500];
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            char cc = s[i][j];
            int y = i*ZR;
            int z = j*ZC;
            for(int k=0; k<ZR; k++){
                for(int x=0; x<ZC; x++){
                    c[y+k][z+x] = cc;
                }
            }
        }
    }
    for(int i=0; i<R*ZR; i++){
        for(int j=0; j<C*ZC; j++){
            cout<<c[i][j];
        }
        cout<<"\n";
    }
    return 0;
}