#include <iostream>
#include <string>
using namespace std;
int main(){
    int answer = 5000;
    string s;
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if(s[i] == '1'){
            answer -= 500;
        }else if(s[i] == '2'){
            answer -= 800;
        }else if(s[i] == '3'){
            answer -= 1000;
        }
    }
    cout<<answer<<"\n";
    return 0;
}