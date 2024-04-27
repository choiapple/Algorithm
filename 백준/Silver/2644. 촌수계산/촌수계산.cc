#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int N, x, y, M, tx, ty;
vector<int> vc[101];
int visit[101] = {0, };
int answer = -1;
void BFS(int sx){
    queue<pair<int, int> > q;
    q.push(make_pair(sx, 0));
    visit[sx] = 1;
    while(!q.empty()){
        int start = q.front().first;
        int con = q.front().second;
        if(start == y){
            answer = con;
            break;
        }
        q.pop();
        for(int i=0; i<vc[start].size(); i++){
            if(visit[vc[start][i]] == 0){
                visit[vc[start][i]] = 1;
                q.push(make_pair(vc[start][i], con+1));
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    cin>>x>>y;
    cin>>M;
    for(int i=0; i<M; i++){
        cin>>tx>>ty;
        vc[tx].push_back(ty);
        vc[ty].push_back(tx);
    }
    BFS(x);
    cout<<answer<<"\n";
    return 0;
}