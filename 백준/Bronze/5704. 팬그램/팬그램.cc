#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int len, flag;
    while(true){
        getline(cin, s);
        if(s == "*") break;
        len = s.length();
        int arr[27] = {0, };
        for(int i=0; i<len; i++){
            if(s[i] == ' ') continue;
            int tmp = s[i] - 'a';
            arr[tmp] = 1;
        }
        flag = 0;
        for(int i=0; i<26; i++){
            if(arr[i] == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<"Y"<<"\n";
        }else{
            cout<<"N"<<"\n";
        }
    }
}