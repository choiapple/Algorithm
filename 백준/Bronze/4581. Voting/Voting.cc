#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int y, n, p, a, len;
    string s;
    while(true){
        cin>>s;
        if(s == "#") break;
        len = s.length();
        y = 0;
        n = 0;
        p = 0;
        a = 0;
        for(int i=0; i<len; i++){
            if(s[i] == 'Y'){
                y++;
            }else if(s[i] == 'N'){
                n++;
            }else if(s[i] == 'P'){
                p++;
            }else{
                a++;
            }
        }
        if(a*2 >= len){
            cout<<"need quorum"<<"\n";
        }else{
            if(y == n){
                cout<<"tie"<<"\n";
            }else{
                if(y > n){
                    cout<<"yes"<<"\n";
                }else{
                    cout<<"no"<<"\n";
                }
            }
        }
    }
}