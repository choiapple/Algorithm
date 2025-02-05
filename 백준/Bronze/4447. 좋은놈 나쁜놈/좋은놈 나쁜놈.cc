#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, len, G, B;
    string s;
    cin>>N;
    cin.ignore();
    for(int i=0; i<N; i++){
        getline(cin, s);
        len = s.length();
        G = 0;
        B = 0;
        for(int j=0; j<len; j++){
            if(s[j] == 'G' || s[j] == 'g'){
                G++;
            }else if(s[j] == 'B' || s[j] == 'b'){
                B++;
            }
        }
        if(G > B){
            cout<<s<<" is GOOD"<<"\n";
        }else if(B > G){
            cout<<s<<" is A BADDY"<<"\n";
        }else if(G == B){
            cout<<s<<" is NEUTRAL"<<"\n";
        }
    }
    return 0;
}