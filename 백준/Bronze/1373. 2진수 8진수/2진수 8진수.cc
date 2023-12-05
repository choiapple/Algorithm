#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long len = s.length();
    string answer = "";
    int k = 0;
    if(len%3 == 0){
        int tmp = 0;
        k = 3;
        if(s[0] == '1'){
            tmp += 4;
        }
        if(s[1] == '1'){
            tmp += 2;
        }
        if(s[2] == '1'){
            tmp += 1;
        }
        cout<<tmp;
    }else if(len%3 == 2){
        k = 2;
        int tmp = 0;
        if(s[0] == '1'){
            tmp += 2;
        }
        if(s[1] == '1'){
            tmp += 1;
        }
        cout<<tmp;
    }else if(len%3 == 1){
        k = 1;
        int tmp = 0;
        if(s[0] == '1'){
            tmp += 1;
        }
        cout<<tmp;
    }
    for(int i=k; i<len; i+=3){
        int tmp = 0;
        if(i < len){
            if(s[i] == '1'){
                tmp += 4;
            }
        }
        if(i+1 < len){
            if(s[i+1] == '1'){
                tmp += 2;
            }
        }
        if(i+2 < len){
            if(s[i+2] == '1'){
                tmp += 1;
            }
        }
        cout<<tmp;
    }
}