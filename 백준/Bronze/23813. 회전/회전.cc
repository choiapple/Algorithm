#include <iostream>
#include <string>
using namespace std;
int main(){
    long long answer = 0;
    int len;
    string s;
    cin>>s;
    len = s.length();
    for(int i=0; i<len; i++){
        s = s[len-1] + s.substr(0, len-1);
        answer += stoi(s);
    }
    cout<<answer<<"\n";
    return 0;
}