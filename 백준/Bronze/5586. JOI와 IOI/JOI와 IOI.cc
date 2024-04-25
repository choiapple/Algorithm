#include <iostream>
using namespace std;
int main(){
    string s;
    int answer1 = 0, answer2 = 0;
    cin>>s;
    for(int i=0; i<s.length()-2; i++){
        if(s[i] == 'J' && s[i+1] == 'O' && s[i+2] == 'I'){
            answer1++;
        }else if(s[i] == 'I' && s[i+1] == 'O' && s[i+2] == 'I'){
            answer2++;
        }
    }
    cout<<answer1<<"\n"<<answer2<<"\n";
    return 0;
}