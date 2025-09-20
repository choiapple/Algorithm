#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, flag = 0, left = 0, right = 0, answer = 0;
    string s;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>s;
        flag = 0;
        left = 0;
        right = 0;
        for(int i=0; i<s.length(); i++){
            if(flag == 0 && s[i] == '!'){
                left++;
            }else if(flag == 0 && (s[i] == '0' || s[i] == '1')){
                answer = s[i] - '0';
                flag = 1;
            }else{
                right++;
            }
        }
        if(right > 0){
            answer = 1;
        }
        if(left%2 == 1){
            if(answer == 1) answer = 0;
            else answer = 1;
        }
        cout<<answer<<"\n";
    }
}