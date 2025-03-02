#include <iostream>
using namespace std;
int main(){
    int answer = 1, len;
    string s;
    cin>>s;
    len = s.length();
    if(s[0] == 'c'){
        answer *= 26;
    }else{
        answer *= 10;
    }
    for(int i=1; i<len; i++){
        if(s[i-1] == s[i]){
            if(s[i] == 'c'){
                answer *= 25;
            }else{
                answer *= 9;
            }
        }else{
            if(s[i] == 'c'){
                answer *= 26;
            }else{
                answer *= 10;
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}