#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, ss;
    char c[9] = {'b', 'd', 'p', 'q', 'i', 'o', 'v', 'w', 'x'};
    int len, flag = 0, flag2 = 0;
    while(true){
        cin>>s;
        if(s == "#") break;
        len = s.length();
        flag = 0;
        ss = "";
        for(int i=len-1; i>=0; i--){
            flag2 = 0;
            for(int j=0; j<9; j++){
                if(c[j] == s[i]){
                    flag2 = 1;
                    break;
                }
            }
            if(flag2 == 0){
                flag = 1;
                break;
            }else if(s[i] == 'b'){
                ss += 'd';
            }else if(s[i] == 'd'){
                ss += 'b';
            }else if(s[i] == 'p'){
                ss += 'q';
            }else if(s[i] == 'q'){
                ss += 'p';
            }else{
                ss += s[i];
            }
        }
        if(flag == 0){
            cout<<ss<<"\n";
        }else{
            cout<<"INVALID"<<"\n";
        }
    }
}