#include <iostream>
using namespace std;
int main(){
    string s, answer = "";
    cin>>s;
    if(s[0] == 'E'){
        answer += 'I';
    }else{
        answer += 'E';
    }
    if(s[1] == 'S'){
        answer += 'N';
    }else{
        answer += 'S';
    }
    if(s[2] == 'T'){
        answer += 'F';
    }else{
        answer += 'T';
    }
    if(s[3] == 'J'){
        answer += 'P';
    }else{
        answer += 'J';
    }
    cout<<answer<<"\n";
    return 0;
}