#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, pair<int, int> > > vc;
bool compare(pair<int, pair<int, int> > X, pair<int, pair<int, int> > Y){
    if(X.second.first != Y.second.first){
        return X.second.first > Y.second.first;
    }
    return X.second.second < Y.second.second;
}
int check(int X){
    int len = vc.size();
    for(int i=0; i<len; i++){
        if(X == vc[i].first){
            return i;
        }
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, C, X, idx, cnt, len;
    cin>>N>>C;
    for(int n=0; n<N; n++){
        cin>>X;
        idx = check(X);
        if(idx == -1){
            vc.push_back(make_pair(X, make_pair(1, n)));
        }else{
            vc[idx].second.first++;
        }
    }
    sort(vc.begin(), vc.end(), compare);
    len = vc.size();
    for(int i=0; i<len; i++){
        cnt = vc[i].second.first;
        for(int j=0; j<cnt; j++){
            cout<<vc[i].first<<" ";
        }
    }
    return 0;
}