#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    char c, C;
    int tmp = 0;
    while(true){
        tmp = 0;
        getline(cin, s);
        if(s[0] == '#') break;
        c = s[0];
        C = s[0] - 32;
        for(int i=1; i<s.length(); i++){
            if(c == s[i] || C == s[i]){
                tmp ++;
            }
        }
        cout<<c<<" "<<tmp<<"\n";
    }
}