#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s, ss, sss = "";
    int s_len, ss_len, k, up = 0;
    cin>>s>>ss;
    reverse(s.begin(), s.end());
    reverse(ss.begin(), ss.end());
    s_len = s.length();
    ss_len = ss.length();
    if(s_len > ss_len){
        k = s_len;
    }else{
        k = ss_len;
    }
    for(int i=0; i<k; i++){
        int s_i = 0;
        int ss_i = 0;
        if(i < s_len) s_i = s[i] - '0';
        if(i < ss_len) ss_i = ss[i] - '0';
        int sss_i = (up + s_i + ss_i) % 2;
        up = (up + s_i + ss_i) / 2;
        sss += sss_i + '0';
    }
    if(up == 1){
        sss += "1";
    }
    reverse(sss.begin(), sss.end());
    int flag = 0;
    for(int i=0; i<sss.length(); i++){
        if(sss[i] != '0') flag = 1;
        if(flag == 1) cout<<sss[i];
    }
    if(flag == 0){
        cout<<"0";
    }
    return 0;
}