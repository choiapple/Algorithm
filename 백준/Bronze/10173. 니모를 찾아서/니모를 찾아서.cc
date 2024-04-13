#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    while(true){
        getline(cin, s);
        if(s == "EOI") break;
        int flag = 0;
        if(s.length() <4){
            cout<<"Missing"<<"\n";
            continue;
        }
        for(int i=0; i<s.length()-4; i++){
            string ss = s.substr(i, 4);
            for(int j=0; j<4; j++){
                ss[j] = tolower(ss[j]);
            }
            if(ss == "nemo"){
                flag = 1;
            }
        }
        if(flag == 1){
            cout<<"Found"<<"\n";
        }else{
            cout<<"Missing"<<"\n";
        }
    }
}