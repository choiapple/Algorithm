#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
int N, M;
string map[1001];
pair<int, int> zero_map[1001][1001];
vector<pair<int, int> > zero_vec;
bool visited[1001][1001];

int result[1001][1001];

int dy[4] = {0, -1, 0, 1};
int dx[4] = {-1, 0, 1, 0};
void countZeros(){
    queue<pair<int, int> > q;
    int section = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            q = queue<pair<int, int> > {};
            zero_vec.clear();
            section++;
            if(map[i][j] == '1') continue;
            if(visited[i][j] == true) continue;
            q.push({i, j});
            visited[i][j] = true;
            while(!q.empty()){
                pair<int, int> zero = q.front();
                q.pop();
                zero_vec.push_back(zero);
                for(int k=0; k<4; k++){
                    int ny = zero.first + dy[k];
                    int nx = zero.second + dx[k];
                    if(ny < 0 || ny >= N || nx < 0 || nx >= M) continue;
                    if(visited[ny][nx] == true) continue;
                    if(map[ny][nx] == '1') continue;
                    q.push({ny, nx});
                    visited[ny][nx] = true;
                }
            }
            int zero_size = zero_vec.size();
            for(auto zero : zero_vec){
                zero_map[zero.first][zero.second] = {section, zero_size};
            }
        }
    }
}
void getResult(){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(map[i][j] == '0'){
                result[i][j] = 0;
                continue;
            }
            if(map[i][j] == '1'){
                int sum = 1;
                vector<int> section_check;
                for(int k=0; k<4; k++){
                    int ni = i + dy[k];
                    int nj = j + dx[k];
                    
                    bool check = false;
                    if(ni < 0 || ni >=N || nj < 0 || nj >= M) continue;
                    if(map[ni][nj] == '0'){
                        for(auto section : section_check){
                            if(section == zero_map[ni][nj].first){
                                check = true;
                                break;
                            }
                        }
                        if(check == false){
                            section_check.push_back(zero_map[ni][nj].first);
                            sum += zero_map[ni][nj].second;
                        }
                    }
                }
                sum %= 10;
                result[i][j] = sum;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N>>M;
    for(int n=0; n<N; n++){
        cin>>map[n];
    }
    countZeros();
    getResult();
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout<<result[i][j];
        }
        cout<<"\n";
    }
}