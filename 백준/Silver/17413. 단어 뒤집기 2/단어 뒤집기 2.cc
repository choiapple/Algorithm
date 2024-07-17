#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    int check = 0;
    string s;
    getline(cin, s);
    int len = s.length();
    stack<char> st;
    for(int i=0; i<len; i++){
        if(s[i] == '<' || s[i] == ' '){
            while(!st.empty()){
                cout<<st.top();
                st.pop();
            }
            if(s[i] == '<') check = 1;
            cout<<s[i];
        }else if(check == 1){
            cout<<s[i];
            if(s[i] == '>') check = 0;
        }else{
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}