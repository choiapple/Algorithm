#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, len;
    string s, ss = "aeiou";
    cin>>T;
    for(int t=1; t<=T; t++){
        cin>>s;
        cout<<"Case #"<<t<<": ";
        cout<<s;
        len = s.length();
        if(s[len-1] == 'y'){
            cout<<" is ruled by nobody."<<"\n";
        }else{
            int flag = 0;
            for(int i=0; i<5; i++){
                if(s[len-1] == ss[i]){
                    flag = 1;
                }
            }
            if(flag == 0){
                cout<<" is ruled by a king."<<"\n";
            }else{
                cout<<" is ruled by a queen."<<"\n";
            }
        }
    }
}