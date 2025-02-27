#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, tmp;
    string s, cryptoquote;
    cin>>T;
    cin.ignore();
    for(int i=0; i<T; i++){
        getline(cin, s);
        getline(cin, cryptoquote);
        for(int j=0; j<s.length(); j++){
            if(s[j] == ' '){
                cout<<" ";
            }else{
                tmp = s[j] - 'A';
                cout<<cryptoquote[tmp];
            }
        }
        cout<<"\n";
    }
}