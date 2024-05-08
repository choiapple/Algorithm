#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N, tmp;
    string s;
    vector<pair<int, string> > vc;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s>>tmp;
        vc.push_back(make_pair(tmp, s));
    }
    sort(vc.begin(), vc.end());
    cout<<vc[0].second<<"\n";
    return 0;
}