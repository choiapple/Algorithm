#include <iostream>
using namespace std;
int main(){
    string s;
    int cnt = 0, len, tmp = 0;
    cin>>s;
    len = s.length();
    for(int i=0; i<len; i++){
        if(i < len-1 && s[i] == '(' && s[i+1] == ')'){
            cnt += tmp;
            i++;
        }else if(s[i] == '('){
            tmp++;
        }else{
            cnt++;
            tmp--;
        }
    }
    cout<<cnt<<"\n";
}