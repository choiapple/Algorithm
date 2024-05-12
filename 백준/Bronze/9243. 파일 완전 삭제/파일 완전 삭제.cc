#include <iostream>
using namespace std;
int main(){
    int N;
    string s, s1;
    cin>>N;
    cin>>s;
    cin>>s1;
    if(N%2 == 1){
        for(int i=0; i<s.length(); i++){
            if(s[i] == '1'){
                s[i] = '0';
            }else{
                s[i] = '1';
            }
        }
    }
    if(s == s1){
        cout<<"Deletion succeeded"<<"\n";
    }else{
        cout<<"Deletion failed"<<"\n";
    }
    return 0;
}