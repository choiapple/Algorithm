#include <iostream>
using namespace std;
bool isJava(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            return true;
        }
    }
    return false;
}
bool isCpp(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i] == '_'){
            return true;
        }
    }
    return false;
}
bool isError(string s){
    bool underbar = false;
    bool upper = false;
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            upper = true;
        }else if(s[i] == '_'){
            underbar = true;
        }
    }
    
    if(underbar && upper) return true;
    else if((s[0] >= 'A' && s[0] <= 'Z') || s[0] == '_') return true;
    else if(s[s.length()-1] == '_') return true;
    
    for(int i=0; i<s.length()-1; i++){
        if(s[i] == '_' && s[i+1] == '_') return true;
    }
    return false;
}

int main(){
    string s, answer = "";
    cin>>s;
    if(isError(s)){
        cout<<"Error!";
        return 0;
    }else if(isJava(s)){
        for(int i=0; i<s.length(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                answer += '_'; 
                answer += char(s[i] + 32);
            }else{
                answer += s[i];
            }
        }
    }else if(isCpp(s)){
        for(int i=0; i<s.length(); i++){
            if(s[i] == '_'){
                if(i+1 < s.length()) answer += (s[i+1] - 32);
                i++;
            }else{
                answer += s[i];
            }
        }
    }else{
        answer = s;
    }
    cout<<answer<<"\n";
    return 0;
}