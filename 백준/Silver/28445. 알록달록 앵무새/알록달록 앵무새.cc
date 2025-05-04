#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<string> s;
    string color;
    vector<string> vc;
    for(int i=0; i<4; i++){
        cin>>color;
        s.insert(color);
    }
    for(auto iter=s.begin(); iter!=s.end(); iter++){
        vc.push_back(*iter);
    }
    sort(vc.begin(), vc.end());
    for(int i=0; i<vc.size(); i++){
        for(int j=0; j<vc.size(); j++){
            cout<<vc[i]<<" "<<vc[j]<<"\n";
        }
    }
}