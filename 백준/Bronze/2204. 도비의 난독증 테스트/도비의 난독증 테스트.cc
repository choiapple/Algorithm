#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n;
    string ss;
    while(true){
        cin>>n;
        if(n == 0) break;
        vector<pair<string, string> > vc;
        for(int i=0; i<n; i++){
            cin>>ss;
            string ts = ss;
            for(int j=0; j<ts.length(); j++){
                ts[j] = tolower(ts[j]);
            }
            vc.push_back(make_pair(ts, ss));
        }
        sort(vc.begin(), vc.end());
        cout<<vc[0].second<<"\n";
    }
}