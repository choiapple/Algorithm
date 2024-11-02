#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, answer;
    int len, an, cur;
    while(true){
        cin>>s;
        if(s == "#") break;
        len = s.length();
        if(s[len-1] == 'o'){
            an = 1;
        }else{
            an = 0;
        }
        cur = 0;
        for(int i=0; i<len; i++){
            if(s[i] == '1'){
                cur++;
            }
        }
        if(cur%2 == an){
            answer = s.substr(0, len-1) + '0';
        }else{
            answer = s.substr(0, len-1) + '1';
        }
        cout<<answer<<"\n";
    }
}