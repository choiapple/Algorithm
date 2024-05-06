#include <iostream>
using namespace std;
int main(){
    string s;
    int answer = 0;
    cin>>s;
    int len = s.length();
    for(int i=len-1; i>=0; i--){
        int tmp = 1;
        for(int j=1; j<len-i; j++){
            tmp *= 16;
        }
        if(s[i] == 'A'){
            answer += tmp*10;
        }else if(s[i] == 'B'){
            answer += tmp*11;
        }else if(s[i] == 'C'){
            answer += tmp*12;
        }else if(s[i] == 'D'){
            answer += tmp*13;
        }else if(s[i] == 'E'){
            answer += tmp*14;
        }else if(s[i] == 'F'){
            answer += tmp*15;
        }else{
            answer += tmp * (s[i] - '1' + 1);
        }
    }
    cout<<answer<<"\n";
}