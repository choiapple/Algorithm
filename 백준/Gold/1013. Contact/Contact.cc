#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    string s;
    while(T > 0){
        T--;
        cin>>s;
        int len = s.length();
        int answer = 0;
        int flag = 0;
        for(int i=0; i<len; i++){
            if(flag == 0 && s[i] == '0' && s[i+1] == '1'){
                i++;
            }else if(flag == 0 && s[i] == '1' && s[i+1] == '0' && s[i+2] == '0'){
                flag = 1;
                i+=2;
            }else if(flag == 1 && s[i] == '0'){
                continue;
            }else if(flag == 1 && s[i] == '1'){
                for(int j=i+1; j<len; j++){
                    if(s[j] == '1' && s[j+1] != '0'){
                        i++;
                    }else if(s[j] == '1' && s[j+1] == '0' && s[j+2] == '1'){
                        i++;
                    }else{
                        break;
                    }
                }
                flag = 0;
            }else{
                answer = 1;
            }
        }
        if(flag == 1 || answer == 1){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
        }
    }
}