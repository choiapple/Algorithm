#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, total, mo;
    string s;
    cin>>N;
    cin.ignore();
    for(int i=0; i<N; i++){
        getline(cin, s);
        total = 0;
        mo = 0;
        for(int j=0; j<s.length(); j++){
            if(s[j] != ' '){
                total++;
                if(s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U' ||
                s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
                    mo++;
                }
            }
        }
        cout<<total - mo<<" "<<mo<<"\n";
    }
}