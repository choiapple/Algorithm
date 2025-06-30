#include <iostream>
#include <string>
using namespace std;
int main(){
    int c, len1, len2, t_len, answer = 0;
    string s1, s2, tmp = "";
    cin>>s1>>s2;
    len1 = s1.length();
    len2 = s2.length();
    for(int i=0; i<len1; i++){
        c = s1[i] - '0';
        if(c >= 0 && c <= 9) continue;
        tmp += s1[i];
    }
    t_len = tmp.length();
    for(int i=0; i<=t_len-len2; i++){
        if(tmp.substr(i, len2) == s2){
            answer = 1;
            break;
        }
    }
    cout<<answer<<"\n";
    return 0;
}