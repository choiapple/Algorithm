#include <iostream>
#include <queue>
using namespace std;
int n, m, k, x;
int d[300001];
vector<int> r[300001];
void di(int s){
    d[s] = 0;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int i=0; i<r[cur].size(); i++){
            int next = r[cur][i];
            if(d[next] > d[cur] + 1){
                d[next] = d[cur] + 1;
                q.push(next);
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m>>k>>x;
    for(int i=1; i<=n; i++){
        d[i] = 2147000000;
    }
    
    for(int i=0; i<m; i++){
        int s, e;
        cin>>s>>e;
        r[s].push_back(e);
    }
    di(x);
    bool check = false;
    for(int i=1; i<=n; i++){
        if(d[i] == k){
            check = true;
            cout<<i<<"\n";
        }
    }
    if(!check){
        cout<<-1<<"\n";
    }
}