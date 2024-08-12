#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sl, tl, ss, tt;
    string s, t;
    while(cin>>s>>t){
        sl = s.length();
        tl = t.length();
        ss = 0;
        tt = 0;
        while(ss < sl && tt < tl){
            if(s[ss] == t[tt]){
                ss++;
                tt++;
            }else{
                tt++;
            }
        }
        if(ss == sl){
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        }
    }
}