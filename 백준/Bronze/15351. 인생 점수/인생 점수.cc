#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, len, answer = 0;
    string s;
    cin>>N;
    cin.ignore();
    for(int n=0; n<N; n++){
        getline(cin, s);
        len = s.length();
        answer = 0;
        for(int l=0; l<len; l++){
            if(s[l] == ' ') continue;
            answer += s[l] - 'A' + 1;
        }
        if(answer == 100){
            cout<<"PERFECT LIFE"<<"\n";
        }else{
            cout<<answer<<"\n";
        }
    }
    return 0;
}