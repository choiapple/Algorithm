#include <iostream>
#include <string>
using namespace std;
int main(){
    int flag = 0;
    string s, ss, tmp = "";
    cin>>s>>ss;
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c -'0' >= 0 && c - '0' <= 9) continue;
        tmp += c;
    }
    for(int i=0; i<tmp.length(); i++){
        string tmp2 = tmp.substr(i, ss.length());
        if(tmp2 == ss){
            flag = 1;
            break;
        }
    }
    cout<<flag<<"\n";
    return 0;
}