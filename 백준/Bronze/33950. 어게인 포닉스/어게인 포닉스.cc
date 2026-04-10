#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    string s, tmp;
    cin>>T;
    while(T--){
        cin>>s;
        tmp = "";
        tmp += s[0];
        for(int i=1; i<s.length(); i++){
            if(s[i-1] == 'P' && s[i] == 'O'){
                tmp += "H";
            }
            tmp += s[i];
        }
        cout<<tmp<<"\n";
    }
    return 0;
}