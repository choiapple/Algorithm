#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, answer, f;
    int n = 0;
    char c;
    while(true){
        cin>>s;
        if(s == "E-N-D") break;
        f = "";
        for(int i=0; i<s.length(); i++){
            if((s[i] >= 'A' && s[i] <= 'Z') 
            || (s[i] >= 'a' && s[i] <= 'z')
            || (s[i] == '-')){
                f += s[i];
            }else{
                if(n < f.length()){
                    n = f.length();
                    answer = f;
                }
                f = "";
            }
        }
        if(n < f.length()){
            n = f.length();
            answer = f;
        }
    }
    for(int i=0; i<n; i++){
        c = answer[i];
        if(c >= 'A' && c <= 'Z'){
            c = c + 32; 
        }
        cout<<c;
    }
}