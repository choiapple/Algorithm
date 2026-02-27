#include <iostream>
using namespace std;
int main(){
    int N, answer = 0;
    string s, ss;
    cin>>N;
    cin>>s;
    cin>>ss;
    for(int n=0; n<N; n++){
        if(s[n] == 'C' && s[n] == ss[n]){
            answer++;
        }
    }
    cout<<answer;
    return 0;
}