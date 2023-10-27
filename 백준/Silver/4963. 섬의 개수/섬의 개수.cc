#include <iostream>
#include <queue>
using namespace std;
int w, h;
int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
void bfs(int arr[51][51], int visit[51][51], int i, int j){
    queue<pair<int, int> > q;
    q.push(make_pair(i, j));
    visit[i][j] = 1;
    while(!q.empty()){
        int qi = q.front().first;
        int qj = q.front().second;
        q.pop();
        for(int k=0; k<8; k++){
            int tmpi = qi + dy[k];
            int tmpj = qj + dx[k];
            if(tmpi >= 0 && tmpi <h && tmpj >=0 && tmpj < w){
                if(visit[tmpi][tmpj] == 0 && arr[tmpi][tmpj] == 1){
                    q.push(make_pair(tmpi, tmpj));
                    visit[tmpi][tmpj] = 1;
                }
            }
        }
    }
}
int main(){
    while(true){
        cin>>w>>h;
        if(w == 0 && h == 0){
            break;
        }
        int arr[51][51] = {0, };
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                cin>>arr[i][j];
            }
        }
        int visit[51][51] = {0, };
        int answer = 0;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(arr[i][j] == 1 && visit[i][j] == 0){
                    bfs(arr, visit, i, j);
                    answer++;
                }
            }
        }
        cout<<answer<<"\n";
    }
    
}