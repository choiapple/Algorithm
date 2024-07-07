#include <iostream>
using namespace std;
int main(){
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string s;
    cin>>s;
    int i = 0, j=0, answer = 1;
    while(true){
        if(s[i] == alpha[j]){
            i++;
            j++;
        }else{
            j++;
        }
        if(s.length() == i){
            break;
        }
        if(alpha.length() <= j){
            answer++;
            j = 0;
        }
    }
    cout<<answer<<"\n";
}