#include <iostream>
#include <algorithm>
using namespace std;
int T, N, answer;
int arr[1001] = {0, };
int visit[1001] = {0, };
void DFS(int x){
    visit[x] = 1;
    if(visit[arr[x]] == 0){
        DFS(arr[x]);
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>N;
        fill(visit, visit+1001, 0);
        answer = 0;
        for(int j=1; j<=N; j++){
            cin>>arr[j];
        }
        for(int j=1; j<=N; j++){
            if(visit[j] == 0){
                DFS(j);
                answer++;
            }
        }
        cout<<answer<<"\n";
    }
}