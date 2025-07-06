#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, int> > vc;
void re(int cur, int idx, int M, vector<int> v){
    if(idx > vc.size()) return;
    if(cur == M){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=idx; i<vc.size(); i++){
        if(vc[i].second > 0){
            vc[i].second--;
            v.push_back(vc[i].first);
            re(cur+1, i, M, v);
            v.pop_back();
            vc[i].second++;
        }
    }
}
int main(){
    int N, M, a, flag = 0;
    cin>>N>>M;
    for(int n=0; n<N; n++){
        cin>>a;
        flag = 0;
        for(int i=0; i<vc.size(); i++){
            if(vc[i].first == a){
                vc[i].second++;
                flag = 1;
            }
        }
        if(flag == 1) continue;
        vc.push_back(make_pair(a, 1));
    }
    sort(vc.begin(), vc.end());
    vector<int> v;
    re(0, 0, M, v);
}