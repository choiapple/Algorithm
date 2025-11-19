#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    string s;
    vector<string> vc;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s;
        if(s.length() == 3){
            vc.push_back(s);
        }
    }
    sort(vc.begin(), vc.end());
    cout<<vc[0]<<"\n";
    return 0;
}