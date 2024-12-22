#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, person;
    int left = 0, right = 0, flag = 0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(flag == 0){
            person = s.substr(i, 5);
            if(person == "(^0^)"){
                flag = 1;
                i += 4;
            }
        }
        if(s[i] == '@'){
            if(flag == 0){
                left++;
            }else{
                right++;
            }
        }
    }
    cout<<left<<" "<<right<<"\n";
}