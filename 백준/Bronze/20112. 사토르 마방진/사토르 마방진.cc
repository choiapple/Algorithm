#include <iostream>
using namespace std;
int main(){
    int N, flag = 0;
    string s[101], ss, sss;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s[i];
    }
    for(int i=0; i<N; i++){
        ss = "";
        sss = "";
        for(int j=0; j<N; j++){
            ss += s[i][j];
            sss += s[j][i];
        }
        if(ss != sss){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
}