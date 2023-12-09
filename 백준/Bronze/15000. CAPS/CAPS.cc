#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        char c = s[i] - 32;
        cout<<c;
    }
}