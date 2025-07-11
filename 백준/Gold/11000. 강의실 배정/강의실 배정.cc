#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp1, tmp2;
    vector<pair<int, int> > vc;
    priority_queue<int, vector<int>, greater<int> > t;
    cin>>N;
    while(N--){
        cin>>tmp1>>tmp2;
        vc.push_back(make_pair(tmp1, tmp2));
    }
    
    sort(vc.begin(), vc.end());
    
    for(int i=0; i<vc.size(); i++){
        t.push(vc[i].second);
        if(t.top() <= vc[i].first) t.pop();
    }
    
    cout<<t.size()<<"\n";
    return 0;
}