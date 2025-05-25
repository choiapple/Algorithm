#include <iostream>
using namespace std;
int main(){
    int si, cnt = 0, flag = 0;
    string s;
    cin>>s;
    si = s.length();
    for(int i=0; i<si; i++){
        if(s[i] == 'N') continue;
        cnt++;
        for(int j=i; j<si; j+=i+1){
            s[j] = s[j] == 'N' ? 'Y' : 'N';
        }
    }
    for(int i=0; i<si; i++){
        if(s[i] == 'Y') flag = 1;
    }
    if(flag == 0){
        cout<<cnt<<"\n";
    }else{
        cout<<-1<<"\n";
    }
    return 0;
}