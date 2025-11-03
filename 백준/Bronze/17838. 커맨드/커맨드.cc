#include <iostream>
#include <string>
using namespace std;
int main(){
    int T;
    string s;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>s;
        if(s.length() != 7){
            cout<<0<<"\n";
            continue;
        }
        if(s[0] == s[1] && s[0] == s[4] 
        && s[2] == s[3] && s[2] == s[5] 
        && s[2] == s[6] && s[0] != s[2]){
            cout<<1<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }
}