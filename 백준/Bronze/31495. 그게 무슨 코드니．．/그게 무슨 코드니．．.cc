#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int len = s.length();
    if(len > 2 && s[0] == '\"' && s[len-1] == '\"'){
        cout<<s.substr(1,len-2)<<"\n";
    }else{
        cout<<"CE"<<"\n";
    }
}