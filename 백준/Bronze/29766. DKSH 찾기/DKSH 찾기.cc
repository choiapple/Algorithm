#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int len, answer = 0;
    cin>>s;
    len = s.length();
    for(int i=0; i<len; i++){
        if(s.substr(i, 4) == "DKSH"){
            answer++;
        }
    }
    cout<<answer<<"\n";
    return 0;
}