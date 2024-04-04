#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int N, K, L;
vector<pair<int, char> > vc; // 뱀 이동
deque<pair<int, int> > dq; // 뱀
int map[101][101] = {0, };
int visit[101][101] = {0, };
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    cin>>K;
    int x, y;
    for(int i=0; i<K; i++){
        cin>>x>>y;
        map[x][y] = 1;
    }
    cin>>L;
    int t;
    char c;
    for(int i=0; i<L; i++){
        cin>>t>>c;
        vc.push_back(make_pair(t, c));
    }
    int k = 0;
    int ti = 1;
    int a = 0;
    dq.push_front(make_pair(1, 1));
    visit[1][1] = 1;
    while(true){
        int cx = dq.front().first;
        int cy = dq.front().second;
        // 시간이 되기전에는 계속 이동
        if(vc[k].first > ti){
            ti++;
            int nx = cx + dx[a];
            int ny = cy + dy[a];
            if(visit[nx][ny] == 1 || nx > N || ny > N || nx < 1 || ny < 1) break;
            visit[nx][ny] = 1;
            dq.push_front(make_pair(nx, ny));
            if(map[nx][ny] == 0){
                int xx = dq.back().first;
                int yy = dq.back().second;
                visit[xx][yy] = 0;
                dq.pop_back();
            }else{
                map[nx][ny] = 0;
            }
            // 시간이 되면 이동하고 방향 바꿈
        }else if(vc[k].first == ti){
            ti++;
            int nx = cx + dx[a];
            int ny = cy + dy[a];
            if(visit[nx][ny] == 1 || nx > N || ny >N || nx < 1 || ny < 1) break;
            visit[nx][ny] = 1;
            dq.push_front(make_pair(nx, ny));
            if(map[nx][ny] == 0){
                int xx = dq.back().first;
                int yy = dq.back().second;
                visit[xx][yy] = 0;
                dq.pop_back();
            }else{
                map[nx][ny] = 0; // 사과 먹은거 치워야함
            }
            if(vc[k].second == 'L'){
                a = (a + 3)%4;
            }else{
                a = (a + 1)%4;
            }
            k++;
            // 넘어버리면 계속해서 그방향으로 진행
        }else if(k >= L){
            ti++;
            int nx = cx + dx[a];
            int ny = cy + dy[a];
            if(visit[nx][ny] == 1 || nx > N || ny > N || nx < 1 || ny < 1) break;
            visit[nx][ny] = 1;
            dq.push_front(make_pair(nx, ny));
            if(map[nx][ny] == 0){
                int xx = dq.back().first;
                int yy = dq.back().second;
                visit[xx][yy] = 0;
                dq.pop_back();
            }else{
                map[nx][ny] = 0;
            }
        }
        
    }
    cout<<ti-1<<"\n";
}