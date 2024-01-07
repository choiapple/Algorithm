#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len = s.length();
    int flag = 0;
    for(int i=0; i<len; i++){
        if(s[i] == 'p'){
            if(i+1 < len && s[i+1] == 'i'){
                i++;
            }else{
                flag = 1;
            }
        }else if(s[i] == 'k'){
            if(i+1 < len && s[i+1] == 'a'){
                i++;
            }else{
                flag = 1;
            }
        }else if(s[i] == 'c'){
            if(i + 2 < len && s[i+1] == 'h' && s[i+2] == 'u'){
                i+=2;
            }else{
                flag = 1;
            }
        }else{
            flag = 1;
        }
    }
    if(flag == 0){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
}