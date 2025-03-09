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
        if(s.find("PS4") != std::string::npos){
            s.replace(s.find("PS4"), 3, "PS");
            flag = 1;
        }else if(s.find("PS5") != std::string::npos){
            s.replace(s.find("PS5"), 3, "PS");
            flag = 1;
        }
        if(flag == 0){
            break;
        }
    }
    cout<<s<<"\n";
    return 0;
}