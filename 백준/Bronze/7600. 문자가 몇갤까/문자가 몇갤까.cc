#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int len, tmp, answer = 0;
    while(true){
        getline(cin, s);
        if(s == "#") break;
        int visit[26] = {0, };
        answer = 0;
        len = s.length();
        for(int i=0; i<len; i++){
            if(s[i] - 'a' >= 0 && s[i] - 'a' <= 25){
                tmp = s[i] - 'a';
                visit[tmp] = 1;
            }else if(s[i] - 'A' >= 0 && s[i] - 'A' <= 25){
                tmp = s[i] - 'A';
                visit[tmp] = 1;
            }
        }
        for(int i=0; i<26; i++){
            if(visit[i] == 1){
                answer++;
            }
        }
        cout<<answer<<"\n";
    }
}