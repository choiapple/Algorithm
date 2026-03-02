#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int i = 0;
    char tmp;
    cin>>s;
    i = s[0]^'C';
    for(int j=0; j<s.length(); j++){
        tmp = s[j]^i;
        cout<<tmp;
    }
    return 0;
}
