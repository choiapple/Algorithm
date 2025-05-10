#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, si;
    string s;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>s;
        si = s.length();
        stack<char> left, right;
        for(int i=0; i<si; i++){
            if(s[i] == '<'){
                if(left.empty()) continue;
                right.push(left.top());
                left.pop();
            }else if(s[i] == '>'){
                if(right.empty()) continue;
                left.push(right.top());
                right.pop();
            }else if(s[i] == '-'){
                if(left.empty()) continue;
                left.pop();
            }else{
                left.push(s[i]);
            }
        }
        while(!left.empty()){
            right.push(left.top());
            left.pop();
        }
        while(!right.empty()){
            cout<<right.top();
            right.pop();
        }
        cout<<"\n";
    }
}