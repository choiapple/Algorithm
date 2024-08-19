#include <iostream>
using namespace std;
int main(){
    string s;
    char c;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i] - 3 >= 65){
           c = s[i] - 3; 
        }else{
            c = s[i] - 3 + 26;
        }
        cout<<c;
    }
}