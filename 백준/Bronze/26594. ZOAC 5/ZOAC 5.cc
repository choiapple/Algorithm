#include <iostream>
using namespace std;
int main(){
    int answer = 1;
    string s;
    char cur, pre;
    cin>>s;
    pre = s[0];
    for(int i=1; i<s.length(); i++){
        cur = s[i];
        if(cur == pre) answer++;
        else break;
        pre = cur;
    }
    cout<<answer;
    return 0;
}