#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int T, x, y, xx, yy;
    cin>>T;
    for(int t=0; t<T; t++){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<pair<int, int> > vc;
        for(int i=0; i<4; i++){
            cin>>x>>y;
            vc.push_back(make_pair(x, y));
        }
        int flag = 1;
        for(int i=0; i<4; i++){
            vector<int> dist;
            for(int j=0; j<4; j++){
                if(i == j) continue;
                xx = vc[i].first - vc[j].first;
                yy = vc[i].second - vc[j].second;
                xx *= xx;
                yy *= yy;
                dist.push_back(xx+yy);
            }
            sort(dist.begin(), dist.end());
            if(dist[0] == dist[1] && dist[0] + dist[1] == dist[2]) continue;
            flag = 0;
        }
        cout<<flag<<"\n";
    }
}