#include <iostream>
#include <string>
using namespace std;
int main(){
    int N, flag = 0, len;
    string s;
    cin>>N;
    cin>>s;
    while(true){
        flag = 0;
        len = s.length();
        for(int i=0; i<len; i++){
            if(s.substr(i, 3) == "PS4" || s.substr(i, 3) == "PS5"){
                s = s.substr(0, i+2) + s.substr(i+3);
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            break;
        }
    }
    cout<<s<<"\n";
    return 0;
}