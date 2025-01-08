#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    char cur;
    string s;
    int len, answer = 0, left, right;
    cin>>s;
    len = s.length();
    cur = 'A';
    for(int i=0; i<len; i++){
        right = abs(s[i] - cur);
        left = 26 - right;
        answer += min(right, left);
        cur = s[i];
    }
    cout<<answer<<"\n";
    return 0;
}