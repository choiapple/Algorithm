#include <iostream>
using namespace std;
int main(){
    string ko = "KOREA", s;
    int answer = 0, len, cur = 0;
    cin>>s;
    len = s.length();
    for(int i=0; i<len; i++){
        if(ko[cur] == s[i]){
            cur++;
            answer++;
        }
        if(cur == 5){
            cur = 0;
        }
    }
    cout<<answer<<"\n";
    return 0;
}