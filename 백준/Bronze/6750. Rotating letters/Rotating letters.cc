#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int flag = 0;
    string s, ss = "IOSHZXN", answer = "YES";
    cin>>s;
    for(int i=0; i<s.length(); i++){
        flag = 0;
        for(int j=0; j<ss.length(); j++){
            if(s[i] == ss[j]){
                flag = 1;
            }
        }
        if(flag == 0){
            answer = "NO";
            break;
        }
    }
    cout<<answer;
    return 0;
}