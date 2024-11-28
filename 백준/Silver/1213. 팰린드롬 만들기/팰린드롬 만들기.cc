#include <iostream>
using namespace std;
int k = 0, tmp, alpha[27] = {0, }, len; 
bool check(){
    int cnt = 0;
    for(int i=0; i<26; i++){
        if(alpha[i]%2 != 0){
            cnt++;
        }
    }
    if(cnt > 1){
        return false;
    }
    return true;
}
int main(){
    string s;
    char answer[51];
    cin>>s;
    len = s.length();
    for(int i=0; i<len; i++){
        tmp = s[i] - 'A';
        alpha[tmp]++;
    }
    if(!check()){
        cout<<"I'm Sorry Hansoo"<<"\n";
        return 0;
    }
    for(int i=0; i<26; i++){
        while(alpha[i] > 0){
            if(alpha[i] >= 2){
                answer[k] = i + 'A';
                answer[len - k - 1] = i + 'A';
                alpha[i] -= 2;
                k++;
            }else{
                answer[len/2] = i + 'A';
                alpha[i] -= 1;
            }
        }
    }
    for(int i=0; i<len; i++){
        cout<<answer[i];
    }
    return 0;
}