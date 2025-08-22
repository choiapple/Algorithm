#include <iostream>
#include <string>
using namespace std;
int main(){
    int len;
    string s, answer;
    while(getline(cin, s)){
        len = s.length();
        answer = "";
        for(int i=0; i<len; i++){
            if(s[i] == 'i'){
                answer += 'e';
            }else if(s[i] == 'e'){
                answer += 'i';
            }else if(s[i] == 'I'){
                answer += 'E';
            }else if(s[i] == 'E'){
                answer += 'I';
            }else{
                answer += s[i];
            }
        }
        cout<<answer<<"\n";
    }
}