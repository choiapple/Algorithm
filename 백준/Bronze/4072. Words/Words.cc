#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, token;
    while(true){
        getline(cin, s);
        if(s == "#") break;
        stringstream ss(s);
        while(ss>>token){
            reverse(token.begin(), token.end());
            cout<<token<<" ";
        }
        cout<<"\n";
    }
}