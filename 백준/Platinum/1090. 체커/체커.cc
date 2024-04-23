#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N, x, y;
vector<pair<int, int> > vc;
vector<pair<int, int> > gather;
int solve(int k, int idx){
    int mid_x = gather[idx].first;
    int mid_y = gather[idx].second;
    
    vector<int> dis;
    for(int i=0; i<N; i++){
        dis.push_back(abs(mid_x - vc[i].first) + abs(mid_y - vc[i].second));
    }
    sort(dis.begin(), dis.end());
    int sum = 0;
    for(int i=0; i<k; i++){
        sum += dis[i];
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>x>>y;
        vc.push_back(make_pair(x, y));
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            gather.push_back(make_pair(vc[i].first, vc[j].second));
        }
    }
    for(int i=1; i<=N; i++){
        int ans = 2147000000;
        for(int j=0; j<gather.size(); j++){
            ans = min(ans, solve(i, j));
        }
        cout<<ans<<' ';
    }
}
