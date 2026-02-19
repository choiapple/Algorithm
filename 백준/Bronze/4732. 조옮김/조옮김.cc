#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s[12] = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};
    int N;
    string ss, token;
    while(true){
        getline(cin, ss);
        if(ss == "***") break;
        cin>>N;
        cin.ignore();
        stringstream sss(ss);
        while(sss >> token){
            int idx = 0;
            string ssss = "";
            ssss += token[0];
            for(int i=0; i<12; i++){
                if(ssss == s[i]){
                    idx = i;
                }
            }
            if(token.length() == 2){
                if(token[1] == '#'){
                    if(N > 0){
                        idx += 2;
                    }
                }else{
                    if(N < 0){
                        idx -= 2;
                    }
                }
            }else{
                if(N > 0){
                    idx += 1;
                }else{
                    idx -= 1;
                }
            }
            if(idx < 0){
                cout<<s[12 + idx]<<" ";
            }else if(idx > 11){
                cout<<s[idx - 12]<<" ";
            }else{
                cout<<s[idx]<<" ";
            }
        }
        cout<<"\n";
    }
}