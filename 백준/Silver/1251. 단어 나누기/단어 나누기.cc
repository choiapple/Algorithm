#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> vc;
    string s, s1, s2, s3, s4;
    int len;
    cin>>s;
    len = s.length();
    for(int i=1; i<=len; i++){
        for(int j=1; j<=len-i-1; j++){
            s1 = s.substr(0, i);
            reverse(s1.begin(), s1.end());
            s2 = s.substr(i, j);
            reverse(s2.begin(), s2.end());
            s3 = s.substr(i+j);
            reverse(s3.begin(), s3.end());
            s4 = s1 + s2 + s3;
            vc.push_back(s4);
        }
    }
    sort(vc.begin(), vc.end());
    cout<<vc[0]<<"\n";
}