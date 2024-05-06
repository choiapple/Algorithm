#include <iostream>
using namespace std;
int main(){
    string s;
    int answer = 0;
    cin>>s;
    int len = s.length();
    for(int i=len-1; i>=0; i--){
        int tmp = 1;
        for(int j=1; j<len-i; j++){
            tmp *= 16;
        }
        if(s[i] >= 'A'){
            answer += tmp * (s[i] - 'A' + 10);
        }else{
            answer += tmp * (s[i] - '1' + 1);
        }
    }
    cout<<answer<<"\n";
}