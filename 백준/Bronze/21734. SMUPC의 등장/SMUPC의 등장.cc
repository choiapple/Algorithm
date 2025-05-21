#include <iostream>
using namespace std;
int main(){
    string S;
    int si, tmp, cnt;
    cin>>S;
    si = S.length();
    for(int i=0; i<si; i++){
        tmp = S[i];
        cnt = 0;
        while(tmp > 0){
            cnt += tmp%10;
            tmp/=10;
        }
        for(int j=0; j<cnt; j++){
            cout<<S[i];
        }
        cout<<"\n";
    }
    return 0;
}