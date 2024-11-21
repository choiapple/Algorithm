#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<string, int> a, pair<string, int> b){
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first < b.first;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp;
    string s;
    vector<pair<string, int> > vc;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s>>tmp;
        vc.push_back(make_pair(s, tmp));
    }
    sort(vc.begin(), vc.end(), compare);
    cout<<vc[0].first<<"\n";
    return 0;
}