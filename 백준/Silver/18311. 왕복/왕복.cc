#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long N, K, tmp, answer, cnt = 0;
    vector<pair<int, int> > vc;
    cin>>N>>K;
    for(int i=0; i<N; i++){
        cin>>tmp;
        vc.push_back(make_pair(tmp, i+1));
    }
    for(int i=0; i<N; i++){
        cnt += vc[i].first;
        if(cnt > K){
            cout<<vc[i].second;
            return 0;
        }
    }
    for(int i=N-1; i>=0; i--){
        cnt += vc[i].first;
        if(cnt > K){
            cout<<vc[i].second;
            return 0;
        }
    }
    return 0;
}