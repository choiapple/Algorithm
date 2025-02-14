#include <iostream>
using namespace std;
int change(char x) {
    if(x == 'R') {
        return 0;
    }else if(x == 'S') {
        return 1;
    }else{
        return 2;
    }
}
int main(){
    int ML, MR, TL, TR;
    char m1, m2, t1, t2;
    cin>>m1>>m2>>t1>>t2;
    ML = change(m1);
    MR = change(m2);
    TL = change(t1);
    TR = change(t2);
    if(ML == MR && ((ML + 2)%3 == TL || (ML + 2)%3 == TR)){
        cout<<"TK"<<"\n";
    }else if(TL == TR && ((TL + 2)%3 == ML || (TL + 2)%3 == MR)){
        cout<<"MS"<<"\n";
    }else{
        cout<<"?"<<"\n";
    }
    return 0;
}