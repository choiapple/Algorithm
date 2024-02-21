#include <iostream>
using namespace std;
int T, n;
int cnt = 0;
int arr[100001] = {0, };
int done[100001] = {0, };
int visit[100001] = {0, };
void dfs(int cur){
    visit[cur] = 1;
    int next = arr[cur];
    if(visit[next] == 0){
        dfs(next);
    }else if(done[next] == 0){
        for(int i=next; i != cur; i = arr[i]){
            cnt++;
        }
        cnt++;
    }
    done[cur] = 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>n;
        cnt = 0;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            visit[i] = 0;
            done[i] = 0;
        }
        for(int i=1; i<=n; i++){
            if(visit[i] == 1) continue;
            dfs(i);
        }
        cout<<n-cnt<<"\n";
    }
}