#include <iostream>
#include <queue>
#include <map>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, x, y, answer = 987654321, visit[101] = {0, };
    map<int, int> s;
    map<int, int> b;
    cin>>N>>M;
    for(int n=0; n<N; n++){
        cin>>x>>y;
        s[x] = y;
    }
    for(int m=0; m<M; m++){
        cin>>x>>y;
        b[x] = y;
    }
    queue<pair<int, int> > q;
    q.push(make_pair(1, 0));
    while(!q.empty()){
        int cur = q.front().first;
        int move = q.front().second;
        q.pop();
        if(cur == 100){
            answer = move;
            break;
        }
        for(int i=1; i<=6; i++){
            int next = cur + i;
            if(s.find(cur + i) != s.end()){
                next = s[cur + i];
            }
            if(b.find(cur + i) != b.end()){
                next = b[cur + i];
            }
            if(next <= 100 && visit[next] == 0){
                q.push(make_pair(next, move+1));
                visit[next] = 1;
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}