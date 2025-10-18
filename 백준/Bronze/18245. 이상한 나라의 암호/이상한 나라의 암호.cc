#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, answer = "";
    int K = 1;
    while(true){
        getline(cin, s);
        if(s == "Was it a cat I saw?") break;
        answer = "";
        for(int i=0; i<s.length(); i+=K+1){
            answer += s[i];
        }
        cout<<answer<<"\n";
        K++;
    }
}