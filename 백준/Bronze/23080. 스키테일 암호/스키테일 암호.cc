#include <iostream>
using namespace std;
int main(){
    int n, len;
    string s;
    cin>>n;
    cin>>s;
    len = s.length();
    for(int i=0; i<len; i+=n){
        cout<<s[i];
    }
    return 0;
}