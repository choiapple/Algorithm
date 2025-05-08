#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int R, C, visit[101][101] = {0, };
vector<vector<char> > vc;
int dr[4] = {0, -1, 0, 1};
int dc[4] = {-1, 0, 1, 0};
void check(int r, int c){
    queue<pair<int, int> > q;
    q.push(make_pair(r, c));
    visit[r][c] = 1;
    while(!q.empty()){
        int nr = q.front().first;
        int nc = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nrr = nr + dr[i];
            int ncc = nc + dc[i];
            if(nrr < 0 || nrr >=R || ncc <0 || ncc >= C) continue;
            if(visit[nrr][ncc] == 1) continue;
            if(vc[nrr][ncc] == '.') continue;
            visit[nrr][ncc] = 1;
            q.push(make_pair(nrr, ncc));
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int answer = 0;
    char tmp;
    
    cin>>R>>C;
    for(int r=0; r<R; r++){
        vector<char> v;
        for(int c=0; c<C; c++){
            cin>>tmp;
            v.push_back(tmp);
        }
        vc.push_back(v);
    }
    for(int r=0; r<R; r++){
        for(int c=0; c<C; c++){
            if(vc[r][c] == '#' && visit[r][c] == 0){
                check(r, c);
                answer++;
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}