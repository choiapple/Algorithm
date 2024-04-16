#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    string ts;
    char c;
    int flag = 0;
    while(true){
        getline(cin, s);
        if(s == "*") break;
        c = s[0];
        flag = 0;
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