#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int T, a, b;
    char tmp;
    cin>>s;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>a>>b;
        tmp = s[a];
        s[a] = s[b];
        s[b] = tmp;
    }
    cout<<s<<"\n";
    return 0;
}