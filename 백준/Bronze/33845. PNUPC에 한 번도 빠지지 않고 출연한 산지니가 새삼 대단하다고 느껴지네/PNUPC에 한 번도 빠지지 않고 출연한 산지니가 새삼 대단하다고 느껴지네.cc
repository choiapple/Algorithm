#include <iostream>
using namespace std;
int main(){
    int flag = 0;
    string s, ss;
    cin>>s>>ss;
    for(int i=0; i<ss.length(); i++){
        flag = 0;
        for(int j=0; j<s.length(); j++){
            if(ss[i] == s[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<ss[i];
        }
    }
    return 0;
}