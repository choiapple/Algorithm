#include <iostream>
using namespace std;
int main(){
    int len_s, len_t;
    string s, t, tmp_s = "", tmp_t = "";
    cin>>s>>t;
    len_s = s.length();
    len_t = t.length();
    for(int i=0; i<len_t; i++){
        tmp_s += s;
    }
    for(int i=0; i<len_s; i++){
        tmp_t += t;
    }
    if(tmp_s == tmp_t) cout<<1<<"\n";
    else cout<<0<<"\n";
}