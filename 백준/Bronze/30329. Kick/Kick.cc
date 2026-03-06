#include <iostream>
#include <string>
using namespace std;
int main(){
    int answer = 0;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if("kick" == s.substr(i, 4)){
            answer++;
        }
    }
    cout<<answer;
    return 0;
}