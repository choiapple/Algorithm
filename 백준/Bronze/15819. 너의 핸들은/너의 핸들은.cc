#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, I;
    string s;
    vector<string> vc;
    cin>>N>>I;
    for(int n=0; n<N; n++){
        cin>>s;
        vc.push_back(s);
    }
    sort(vc.begin(), vc.end());
    cout<<vc[I-1]<<"\n";
    return 0;
}