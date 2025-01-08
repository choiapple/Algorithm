#include <iostream>
#include <cmath>
using namespace std;
int main(){
    char cur;
    string s;
    int len, answer = 0, left, right, tmp;
    cin>>s;
    len = s.length();
    cur = 'A';
    for(int i=0; i<len; i++){
        left = 0;
        for(int j=0; j<26; j++){
            tmp = cur - 'A' - j;
            if(tmp >= 0 && tmp == s[i] - 'A'){
                left = j;
                break;
            }else if(tmp < 0 && tmp + 26 == s[i] - 'A'){
                left = j;
                break;
            }
        }
        right = 0;
        for(int j=0; j<26; j++){
            tmp = cur - 'A' + j;
            if(tmp < 26 && tmp == s[i] - 'A'){
                right = j;
                break;
            }else if(tmp >= 26 && tmp - 26 == s[i] - 'A'){
                right = j;
                break;
            }
        }
        if(left < right){
            answer += left;
        }else{
            answer += right;
        }
        cur = s[i];
    }
    cout<<answer<<"\n";
    return 0;
}