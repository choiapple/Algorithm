#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    string s;
    cin>>N;
    cin.ignore();
    for(int n=0; n<N; n++){
        getline(cin, s);
        reverse(s.begin(), s.end());
        cout<<s<<"\n";
    }
    return 0;
}