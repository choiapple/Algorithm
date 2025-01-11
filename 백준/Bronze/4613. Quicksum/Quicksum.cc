#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int len, answer;
    string s;
    while(true){
        getline(cin, s);
        if(s == "#") break;
        len = s.length();
        answer = 0;
        for(int i=0; i<len; i++){
            if(s[i] != ' '){
                answer += (i+1) * (s[i] - 'A' + 1);
            }
        }
        cout<<answer<<"\n";
    }
    return 0;
}