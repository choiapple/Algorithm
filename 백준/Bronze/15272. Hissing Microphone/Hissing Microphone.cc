#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int flag = 0;
    for(int i=1; i<s.length(); i++){
        if(s[i-1] == 's' && s[i] == 's'){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<"hiss";
    }else{
        cout<<"no hiss";
    }
    return 0;
}