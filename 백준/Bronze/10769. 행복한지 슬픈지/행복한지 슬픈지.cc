#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int len = s.length();
    int hap = 0;
    int sa = 0;
    for(int i=0; i<len-3; i++){
        if(s.substr(i, 3) == ":-)"){
            hap++;
        }
        if(s.substr(i, 3) == ":-("){
            sa++;
        }
    }
    if(hap == 0 && sa == 0){
        cout<<"none"<<"\n";
    }else if(hap != 0 && hap == sa){
        cout<<"unsure"<<"\n";
    }else if(hap > sa){
        cout<<"happy"<<"\n";
    }else{
        cout<<"sad"<<"\n";
    }
    return 0;
}