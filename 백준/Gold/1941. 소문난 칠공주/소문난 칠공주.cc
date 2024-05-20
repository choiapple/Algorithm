#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
int map[5][5], answer;
int Select[25];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
bool moreFour(){
    int cnt = 0;
    for(int i=0; i<25; i++){
        if(Select[i] == 1){
            int x = i/5;
            int y = i%5;
            if(map[x][y] == 2) cnt++;
        }
    }
    if(cnt >= 4) return true;
    else return false;
}
bool adj(){
    queue<pair<int, int> > q;
    bool check_select[5][5];
    bool queue_select[5][5];
    bool check_answer = false;
    
    memset(queue_select, false, sizeof(queue_select));
    memset(check_select, false, sizeof(check_select));
    
    int tmp = 0;
    for(int i=0; i<25; i++){
        if(Select[i] == 1){
            int x = i/5;
            int y = i%5;
            check_select[x][y] = true;
            
            if(tmp == 0){
                q.push(make_pair(x, y));
                queue_select[x][y] = true;
                tmp++;
            }
        }
    }
    int cnt = 1;
    while(q.empty() == 0){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if(cnt == 7){
            check_answer = true;
            break;
        }
        
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && ny >= 0 && nx < 5 && ny < 5){
                if(check_select[nx][ny] == true && queue_select[nx][ny] == false){
                    queue_select[nx][ny] = true;
                    q.push(make_pair(nx, ny));
                    cnt++;
                }
            }
        }
    }
    if(check_answer == true) return true;
    return false;
}
void DFS(int idx, int cnt){
    if(cnt == 7){
        if(moreFour() == true){
            if(adj() == true) answer++;
        }
        return;
    }
    for(int i=idx; i<25; i++){
        if(Select[i] == 1) continue;
        Select[i] = 1;
        DFS(i, cnt+1);
        Select[i] = 0;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0; i<5; i++){
        string s;
        cin>>s;
        for(int j=0; j<5; j++){
            if(s[j] == 'Y') map[i][j] = 1;
            else if(s[j] == 'S') map[i][j] = 2;
        }
    }
   DFS(0, 0);
   cout<<answer<<"\n";
}