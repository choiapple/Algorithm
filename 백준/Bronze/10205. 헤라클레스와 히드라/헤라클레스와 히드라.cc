#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int K, h;
    string s;
    cin>>K;
    for(int k=1; k<=K; k++){
        cin>>h;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'c'){
                h += 1;
            }else if(s[i] == 'b'){
                h -= 1;
            }
        }
        if(h < 0) h = 0;
        cout<<"Data Set "<<k<<":"<<"\n"<<h<<"\n";
        cout<<"\n";
    }
}