#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    string s;
    double tmp, max_n;
    vector<string> vc;
    while(true){
        cin>>t;
        if(t == 0) break;
        max_n = 0;
        vc.clear();
        for(int i=0; i<t; i++){
            cin>>s>>tmp;
            if(tmp > max_n){
                max_n = tmp;
                vc.clear();
                vc.push_back(s);
            }else if(tmp == max_n){
                vc.push_back(s);
            }
        }
        for(auto ss:vc){
            cout<<ss<<" ";
        }
        cout<<"\n";
    }
}