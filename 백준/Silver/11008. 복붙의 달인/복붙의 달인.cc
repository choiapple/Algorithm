#include <iostream>
#include <string>
using namespace std;
int main(){
    int T;
    cin>>T;
    string S, P;
    for(int t=0; t<T; t++){
        cin>>S>>P;
        int len = P.length();
        int tmp = S.length();
        int answer = 0;
        for(int i=0; i<S.length(); i++){
            string ss = S.substr(i, len);
            if(ss == P){
                i += len - 1;
                tmp -= len;
                answer++;
            }
        }
        cout<<answer + tmp<<"\n";
    }
}