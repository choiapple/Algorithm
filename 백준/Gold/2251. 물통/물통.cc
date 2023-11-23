#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int A, B, C;
int visit[201][201][201] = {0, };
vector<int> vc;
void solve(){
    queue<pair<pair<int, int>, int> > q;
    q.push(make_pair(make_pair(0, 0), C));
    while(!q.empty()){
        int a = q.front().first.first;
        int b = q.front().first.second;
        int c = q.front().second;
        
        q.pop();
        
        if(visit[a][b][c] == 1) continue;
        visit[a][b][c] = 1;
        
        if(a == 0){
            vc.push_back(c);
        }
        
        if(a + b > B){
            q.push(make_pair(make_pair(a+b - B, B), c));
        }else{
            q.push(make_pair(make_pair(0, a+b), c));
        }
        
        if(a + c > C){
            q.push(make_pair(make_pair(a+c - C, b), C));
        }else{
            q.push(make_pair(make_pair(0, b), a+c));
        }
        
        if(b+a > A){
            q.push(make_pair(make_pair(A, b+a-A), c));
        }else{
            q.push(make_pair(make_pair(b+a, 0), c));
        }
        
        if(b+c > C){
             q.push(make_pair(make_pair(a, b+c-C), C));
        }else{
            q.push(make_pair(make_pair(a, 0), b+c));
        }
        
         if(c+a > A){
             q.push(make_pair(make_pair(A, b), c+a-A));
        }else{
            q.push(make_pair(make_pair(c+a, b), 0));
        }
        
        if(c+b > B){
            q.push(make_pair(make_pair(a, B), c+b-B));
        }else{
            q.push(make_pair(make_pair(a, c+b), 0));
        }
    }
}
int main(){
    cin>>A>>B>>C;
    solve();
    int len = vc.size();
    sort(vc.begin(), vc.end());
    for(int i=0; i<len; i++){
        cout<<vc[i]<<" ";
    }
    return 0;
}