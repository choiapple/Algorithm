#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    while(true){
        getline(cin, s);
        if(s == "*") break;
        char c = s[0];
        int flag = 0;
        for(int i=1; i<s.length(); i++){
            if(s[i] == ' ' && tolower(s[i+1]) != tolower(c)){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<"Y"<<"\n";
        }else{
            cout<<"N"<<"\n";
        }
    }
}