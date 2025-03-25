#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long N, x, y, z, k;
    long long answer = 0, min_num;
    vector<pair<int, int> > vc;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>x>>y;
        vc.push_back(make_pair(x, y));
    }
    sort(vc.begin(), vc.end());
    for(int i=0; i<N; i++){
        x = vc[i].first;
        y = vc[i].second;
        min_num = 98765421;
        for(int j = i+1; j<N; j++){
            z = vc[j].first;
            k = vc[j].second;
            if(k == y){
                min_num = min(min_num, z - x);
            }
        }
        for(int j = i-1; j>=0; j--){
            z = vc[j].first;
            k = vc[j].second;
            if(k == y){
                min_num = min(min_num, x - z);
            }
        }
        answer += min_num;
    }
    cout<<answer<<"\n";
    return 0;
}