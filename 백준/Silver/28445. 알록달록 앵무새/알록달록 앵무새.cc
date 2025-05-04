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
        for(auto iter2=s.begin(); iter2!=s.end(); iter2++){
            cout<<*iter<<" "<<*iter2<<"\n";
        }
    }
    
}