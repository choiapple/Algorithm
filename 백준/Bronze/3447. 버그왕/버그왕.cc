#include <iostream>
#include <string>
using namespace std;
bool find(string s){
    int len = s.length();
    for(int i=0; i<len; i++){
        if(s.substr(i, 3) == "BUG"){
            return true;
        }
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, tmp;
    int len;
    while(getline(cin, s)){
        while(find(s)){
            len = s.length();
            tmp = "";
            for(int i=0; i<len; i++){
                if(s.substr(i, 3) == "BUG"){
                    i+=2;
                }else{
                    tmp += s[i];
                }
            }
            s = tmp;
        }
        cout<<s<<"\n";
    }
}