#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, a, b, len;
    string password, answer;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>a>>b;
        cin>>password;
        len = password.length();
        answer = "";
        for(int i=0; i<len; i++){
            answer += (a * (password[i] - 'A') + b) % 26 + 'A';
        }
        cout<<answer<<"\n";
    }
}