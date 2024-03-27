#include <iostream>
#include <string>
using namespace std;
int main(){
    int arr[27] = {0, };
    string s;
    while(getline(cin, s)){
        int len = s.length();
        for(int i=0; i<len; i++){
            if(s[i] == ' ') continue;
            int tmp = s[i] - 'a';
            arr[tmp]++;
        }
    }
    int max_n = 0;
    for(int i=0; i<26; i++){
        if(arr[i] > max_n){
            max_n = arr[i];
        }
    }
    for(int i=0; i<26; i++){
        if(arr[i] == max_n){
            char c = i + 'a';
            cout<<c;
        }
    }
}