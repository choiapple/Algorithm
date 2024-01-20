#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#define INF 2147000000
using namespace std;
int n, m, r;
int a, b, l;
int item[101] = {0, };
int value[101] = {0, };
vector<pair<int, int> > node[101];
int answer = 0;
priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
int dij(int x){
    for(int i=1; i<=n; i++){
        value[i] = INF;
    }
    value[x] = 0;
    pq.push(make_pair(0, x));
    while(!pq.empty()){
        int u = pq.top().first;
        int y = pq.top().second;
        pq.pop();
        
        for(int i=0; i<node[y].size(); i++){
            int z = node[y][i].first;
            int s = node[y][i].second;
            
            if(u+s < value[z]){
                value[z] = u + s;
                pq.push(make_pair(u+s, z));
            }
        }
    }
    int sum_n = 0;
    for(int i=1; i<=n; i++){
        if(value[i] <= m){
            sum_n += item[i];
        }
    }
    return sum_n;
}
int main(){
    cin>>n>>m>>r;
    for(int i=1; i<=n; i++){
        cin>>item[i];
    }
    for(int i=0; i<r; i++){
        cin>>a>>b>>l;
        node[a].push_back(make_pair(b, l));
        node[b].push_back(make_pair(a, l));
    }
    for(int i=1; i<=n; i++){
        answer = max(answer, dij(i));
    }
    cout<<answer<<"\n";
    return 0;
}