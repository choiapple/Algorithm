#include <iostream>
using namespace std;
int main(){
    int N, answer = 5, tmp;
    string s, ss ="eagle";
    cin>>N;
    cin>>s;
    for(int n=0; n<=N-5; n++){
        tmp = 0;
        for(int i=n; i<n+5; i++){
            if(ss[i-n] == s[i]){
                tmp++;
            }
        }
        if(answer > 5 - tmp){
            answer = 5 - tmp;
        }
    }
    cout<<answer;
    return 0;
}