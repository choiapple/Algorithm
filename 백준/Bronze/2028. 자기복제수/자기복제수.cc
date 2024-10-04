#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, len_s, len_ss;
    string s, ss;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>N;
        s = to_string(N * N);
        ss = to_string(N);
        len_s = s.length();
        len_ss = ss.length();
        if(s.substr(len_s - len_ss, len_ss) == ss){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}