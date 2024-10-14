#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    string s, answer;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s;
        for(int j=0; j<s.length(); j++){
            if(s[j] == 'S'){
                answer = s;
                break;
            }
        }
    }
    cout<<answer<<"\n";
}