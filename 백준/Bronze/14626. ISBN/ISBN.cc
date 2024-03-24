#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int tmp = 0;
    int star = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '*'){
            star = i;
            break;
        }
    }
    for(int j=0; j<=9; j++){
        s[star] = j + '0';
        tmp = 0;
        for(int i=0; i<s.length(); i++){
            if(i%2 == 1){
                tmp += 3 * (s[i] - '0');
            }else{
                tmp += s[i] - '0';
            }
        }
        if(tmp%10 == 0){
            cout<<j<<"\n";
            return 0;
        }
    }
    
}