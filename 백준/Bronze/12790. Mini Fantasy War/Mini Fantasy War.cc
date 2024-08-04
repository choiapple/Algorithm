#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, HP, MP, gong, bang, HP_1, MP_1, gong_1, bang_1, answer;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>HP>>MP>>gong>>bang>>HP_1>>MP_1>>gong_1>>bang_1;
        HP = HP + HP_1;
        MP = MP + MP_1;
        gong = gong + gong_1;
        bang = bang + bang_1;
        if(HP < 1) HP = 1;
        if(MP < 1) MP = 1;
        if(gong < 0) gong = 0;
        answer = HP * 1 + MP * 5 + gong * 2 + bang * 2;
        cout<<answer<<"\n";
    }
}