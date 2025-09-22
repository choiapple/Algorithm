#include <iostream>
using namespace std;
int main(){
    int answer = 0, k = 0, len;
    string s, s1;
    cin>>s>>s1;
    len = s1.length();
    while(k < len){
        answer++;
        for(int i=0; i<s.length(); i++){
            if(s[i] == s1[k] && k < len){
                k++;
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}