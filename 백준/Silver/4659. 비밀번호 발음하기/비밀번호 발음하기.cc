#include <iostream>
#include <string>
using namespace std;
char mo[5] = {'a', 'e', 'i', 'o', 'u'};
bool firstCheck(string password){
    bool flag = false;
    int len = password.length();
    for(int i=0; i<len; i++){
        for(int j=0; j<5; j++){
            if(password[i] == mo[j]){
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    return flag;
}
bool secondCheck(string password){
    bool flag = true;
    int len = password.length();
    int cntMo = 0, cntJa = 0, check = 0;;
    for(int i=0; i<len; i++){
        string tmp = password.substr(i, 3);
        cntMo = 0;
        cntJa = 0;
        for(int j=0; j<tmp.length(); j++){
            check = 0;
            for(int k=0; k<5; k++){
                if(tmp[j] == mo[k]){
                    check = 1;
                    break;
                }
            }
            if(check == 0){
                cntJa++;
            }else{
                cntMo++;
            }
        }
        if(cntMo == 3 || cntJa == 3){
            flag = false;
            break;
        }
    }
    return flag;
}
bool thirdCheck(string password){
    bool flag = true;
    int len = password.length();
    for(int i=0; i<len-1; i++){
        if(password[i] == password[i+1]){
            string tmp = password.substr(i, 2);
            if(tmp != "oo" && tmp != "ee"){
                flag = false;
                break;
            }
        }
    }
    return flag;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string password;
    while(true){
        cin>>password;
        if(password == "end") break;
        if(firstCheck(password) && secondCheck(password) && thirdCheck(password)){
            cout<<"<"<<password<<"> is acceptable."<<"\n";
        }else{
            cout<<"<"<<password<<"> is not acceptable."<<"\n";
        }
    }
}