#include <iostream>
using namespace std;
int main(){
    string s[4] = {"NLCS", "BHA", "KIS", "SJA"};
    string s2[4] = {"northlondo", "branksomeh", "koreainter", "stjohnsbur"};
    string s3;
    cin>>s3;
    for(int i=0; i<=25; i++){
        for(int j=0; j<4; j++){
            string tmp = "";
            for(int k=0; k<10; k++){
                int x = ((s2[j][k] - 'a') + i)%26;
                char c = ('a' + x);
                tmp += c;
            }
            if(tmp == s3){
                cout<<s[j];
                return 0;
            }
        }
    }
}