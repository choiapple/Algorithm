#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, x, y, xx, yy;
    vector<pair<int, int> > vc;
    long long tmp, max_num = 0, answer = 0;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>x>>y;
        vc.push_back(make_pair(x, y));
    }
    sort(vc.begin(), vc.end());
    for(int i=0; i<N; i++){
        x = vc[i].first;
        y = vc[i].second;
        tmp = 0;
        for(int j=0; j<N; j++){
            xx = vc[j].first;
            yy = vc[j].second;
            if(xx >= x && x >= yy){
                tmp += x - yy;
            }
        }
        if(tmp > max_num){
            max_num = tmp;
            answer = x;
        }
    }
    cout<<answer<<"\n";
    return 0;
}