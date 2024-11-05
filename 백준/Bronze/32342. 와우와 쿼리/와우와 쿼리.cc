#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Q, answer;
    string s;
    cin>>Q;
    for(int i=0; i<Q; i++){
        cin>>s;
        answer = 0;
        for(int j=0; j<s.length(); j++){
            if(s.substr(j, 3) == "WOW"){
                answer++;
            }
        }
        cout<<answer<<"\n";
    }
}