#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b){
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
    int N, W, H, tmp;
    vector<pair<int, int> > vc;
    cin>>N;
    for(int n=1; n<=N; n++){
        cin>>W>>H;
        tmp = pow(W, 2) + pow(H, 2);
        vc.push_back(make_pair(n, tmp));
    }
    sort(vc.begin(), vc.end(), compare);
    for(int n=0; n<N; n++){
        cout<<vc[n].first<<"\n";
    }
    return 0;
}