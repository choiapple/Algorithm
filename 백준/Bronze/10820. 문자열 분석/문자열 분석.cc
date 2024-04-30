#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int so, da, num, spa;
    while(getline(cin, s)){
        int len = s.length();
        so = 0;
        da = 0;
        num = 0;
        spa = 0;
        for(int i=0; i<len; i++){
            if(s[i] >= 97){
                so++;
            }else if(s[i] >= 65){
                da++;
            }else if(s[i] - '0' >=0 && s[i] - '0' <= 9){
                num++;
            }else if(s[i] == ' '){
                spa++;
            }
        }
        cout<<so<<" "<<da<<" "<<num<<" "<<spa<<"\n";
    }
}