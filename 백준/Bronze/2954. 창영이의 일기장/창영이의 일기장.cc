#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    string ss = "";
    for(int i=0; i<s.length(); i++){
        ss += s[i];
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            i += 2;
        }
    }
    cout<<ss<<"\n";
}