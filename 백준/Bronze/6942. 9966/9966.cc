#include <iostream>
#include <string>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    int answer = 0;
    for(int i=m; i<=n; i++){
        string s = to_string(i);
        int len = s.length();
        int flag = 0;
        for(int j=0; j<len; j++){
            if(s[j] == '0' && s[len-1-j] == '0') continue;
            if(s[j] == '1' && s[len-1-j] == '1') continue;
            if(s[j] == '6' && s[len-1-j] == '9') continue;
            if(s[j] == '8' && s[len-1-j] == '8') continue;
            if(s[j] == '9' && s[len-1-j] == '6') continue;
            flag = 1;
        }
        if(flag == 0){
            answer++;
        }
    }
    cout<<answer<<"\n";
}