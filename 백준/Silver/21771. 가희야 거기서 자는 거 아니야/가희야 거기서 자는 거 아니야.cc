#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int R, C, g1, g2, p1, p2, tmp = 0;
    char map[101][101];
    cin>>R>>C;
    cin>>g1>>g2>>p1>>p2;
    for(int r=0; r<R; r++){
        for(int c=0; c<C; c++){
            cin>>map[r][c];
            if(map[r][c] == 'P'){
                tmp++;
            }
        }
    }
    if(tmp < p1 * p2){
        cout<<1;
    }else{
        cout<<0;
    }
    return 0;
}