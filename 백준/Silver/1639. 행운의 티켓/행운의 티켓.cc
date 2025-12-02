#include <iostream>
using namespace std;
int main(){
    int answer = 0;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        for(int j=2; j<=s.length(); j+=2){
            if(i + j > s.length()) continue;
            int a = 0;
            int b = 0;
            for(int k=i; k<i+j/2; k++){
                a += s[k] - '0';
            }
            for(int k=i+j/2; k<i+j; k++){
                b += s[k] - '0';
            }
            if(a != b) continue;
            if(answer < j){
                answer = j;
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}