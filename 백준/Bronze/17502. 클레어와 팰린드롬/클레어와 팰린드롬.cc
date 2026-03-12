#include <iostream>
using namespace std;
int main(){
    int N;
    string s, answer = "";
    cin>>N;
    cin>>s;
    for(int i=0; i<N; i++){
        if(s[i] == '?'){
            answer += s[N-i-1];
        }else{
            answer += s[i];
        }
    }
    for(int i=0; i<N; i++){
        if(answer[i] == '?') answer[i] = 'a';
    }
    cout<<answer;
    return 0;
}