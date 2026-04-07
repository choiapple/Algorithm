#include <iostream>
using namespace std;
int main(){
    string s;
    int e = 0, c = 0, u = 0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '_') u++;
        else if(s[i] == ':') c++;
    }
    e = s.length();
    cout<<e + c + u * 5;
    return 0;
}