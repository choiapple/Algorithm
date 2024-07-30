#include <iostream>
#include <string>
using namespace std;
int main(){
    int answer = 0;
    string s, h, tmp;
    cin>>s>>h;
    for(int i=0; i<s.length() - h.length()+1; i++){
        tmp = s.substr(i, h.length());
        if(tmp == h){
            answer++;
        }
    }
    cout<<answer<<"\n";
    return 0;
}