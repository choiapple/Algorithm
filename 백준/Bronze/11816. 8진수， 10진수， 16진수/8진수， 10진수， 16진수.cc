#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int len, answer = 0, tmp;
    string s;
    cin>>s;
    if(s[0] == '0' && s[1] == 'x'){
        len = s.length();
        for(int i=len-1; i>1; i--){
            if(s[i] >= 'a'){
                tmp = s[i] - 'a' + 10;
            }else{
                tmp = s[i] - '0';
            }
            answer += tmp * pow(16, len-1-i);
        }
    }else if(s[0] == '0'){
        len = s.length();
        for(int i=len-1; i>0; i--){
            answer += pow(8, len-1-i) * (s[i] - '0');
        }
    }else{
        answer = stoi(s);
    }
    cout<<answer<<"\n";
    return 0;
}