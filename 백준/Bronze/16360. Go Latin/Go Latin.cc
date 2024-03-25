#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    for(int i=0; i<n; i++){
        cin>>s;
        string answer = "";
        for(int j=0; j<s.length(); j++){
            if(j == s.length()-1 && s[j] =='a'){
                answer += "as";
            }else if(j == s.length()-1 && (s[j] == 'i' || s[j] == 'y')){
                answer += "ios";
            }else if(j == s.length()-1 &&s[j] == 'l'){
                answer += "les";
            }else if(j == s.length()-1 && s[j] == 'n'){
                answer += "anes";
            }else if(j == s.length()-2 && s[j] == 'n' && s[j+1] == 'e'){
                j++;
                answer += "anes";
            }else if(j == s.length()-1 &&s[j] == 'o'){
                answer += "os";
            }else if(j == s.length()-1 &&s[j] == 'r'){
                answer += "res";
            }else if(j == s.length()-1 &&s[j] == 't'){
                answer += "tas";
            }else if(j == s.length()-1 &&s[j] == 'u'){
                answer += "us";
            }else if(j == s.length()-1 &&s[j] == 'v'){
                answer += "ves";
            }else if(j == s.length()-1 &&s[j] == 'w'){
                answer += "was";
            }else{
                answer += s[j];
                if(j == s.length()-1){
                    answer += "us";
                }
            }
        }
        cout<<answer<<"\n";
    }
}