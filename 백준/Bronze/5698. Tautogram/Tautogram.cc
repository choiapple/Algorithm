#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    string s;
    string ts;
    while(true){
        getline(cin, s);
        if(s == "*") break;
        char c = s[0];
        int flag = 0;
        stringstream ss;
        ss.str(s);
        while(ss>>ts){
            if(tolower(ts[0]) != tolower(c)){
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