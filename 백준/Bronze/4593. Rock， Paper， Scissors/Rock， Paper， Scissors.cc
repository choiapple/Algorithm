#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int p1, p2, len;
    string s1, s2;
    while(true){
        cin>>s1>>s2;
        if(s1 == "E" && s2 == "E") break;
        p1 = 0;
        p2 = 0;
        len = s1.length();
        for(int i=0; i<len; i++){
            if(s1[i] == s2[i]) continue;
            if(s1[i] == 'R' && s2[i] == 'S'){
                p1++;
            }else if(s1[i] == 'S' && s2[i] == 'P'){
                p1++;
            }else if(s1[i] == 'P' && s2[i] == 'R'){
                p1++;
            }else{
                p2++;
            }
        }
        cout<<"P1: "<<p1<<"\n";
        cout<<"P2: "<<p2<<"\n";
    }
}