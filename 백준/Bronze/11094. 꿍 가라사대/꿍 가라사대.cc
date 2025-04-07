#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, len;
    string s, tmp;
    cin>>N;
    cin.ignore();
    for(int n=0; n<N; n++){
        getline(cin, s);
        len = s.length();
        for(int i=0; i<len; i++){
            if(s.substr(i, 10) == "Simon says"){
                cout<<s.substr(i+10)<<"\n";
                break;
            }
        }
    }
}