#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, B, tmp, x;
    string s;
    char c;
    cin>>T;
    for(int t=1; t<=T; t++){
        cin>>B;
        cin>>s;
        x = 0;
        cout<<"Case #"<<t<<": ";
        for(int b=0; b<B; b++){
            tmp = 0;
            for(int k=1; k<=8; k++){
                if(s[x] == 'I'){
                    tmp += pow(2, 8-k);
                }
                x++;
            }
            c = tmp;
            cout<<c;
        }
        cout<<"\n";
    }
}