#include <iostream>
using namespace std;
int main(){
    string s, answer = "";
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'B') answer += "v";
        else if(s[i] == 'E') answer += "ye";
        else if(s[i] == 'H') answer += "n";
        else if(s[i] == 'P') answer += 'r';
        else if(s[i] == 'C') answer += 's';
        else if(s[i] == 'Y') answer += 'u';
        else if(s[i] == 'X') answer += 'h';
        else answer += (char) (s[i] + 32);
    }
    cout<<answer<<"\n";
    return 0;
}