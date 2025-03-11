#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char c[5] = {'a', 'e', 'i', 'o', 'u'};
    string s;
    int len, flag = 0, cnt = 0;
    while(true){
        cin>>s;
        if(s == "#") break;
        len = s.length();
        flag = 0;
        cnt = 0;
        for(int i=0; i<len; i++){
            for(int j=0; j<5; j++){
                if(c[j] == s[i]){
                    flag = 1;
                    cnt = i;
                    break;
                }
            }
            if(flag != 0){
                break;
            }
        }
        s = s.substr(cnt) + s.substr(0, cnt);
        cout<<s<<"ay"<<"\n";
    }
}