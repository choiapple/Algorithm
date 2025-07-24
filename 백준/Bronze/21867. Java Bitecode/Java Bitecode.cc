#include <iostream>
using namespace std;
int main(){
    int N;
    string s, bite = "";
    cin>>N;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i] != 'J' && s[i] != 'A' && s[i] != 'V'){
            bite += s[i];
        }
    }
    if(bite.length() == 0){
        cout<<"nojava";
    }else{
        cout<<bite;
    }
    return 0;
}