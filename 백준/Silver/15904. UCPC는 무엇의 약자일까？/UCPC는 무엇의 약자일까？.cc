#include <iostream>
#include <string>
using namespace std;
int main(){
    int k = 0;
    string s, ucpc = "UCPC";
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if(k < 4 && ucpc[k] == s[i]){
            k++;
        }
    }
    if(k == 4){
        cout<<"I love UCPC";
    }else{
        cout<<"I hate UCPC";
    }
}