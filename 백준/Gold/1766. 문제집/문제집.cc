#include <iostream>
#include <vector>
#include <queue>

#define MAX 32010
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, a, b;
    int entry[MAX];
    vector<int> problem[MAX];
    priority_queue<int> Q;
    cin>>N>>M;
    for(int i=0; i<M; i++){
        cin>>a>>b;
        problem[a].push_back(b);
        entry[b]++;
    }
    for(int i=1; i<=N; i++){
        if(entry[i] == 0) Q.push(-i);
    }
    while(Q.empty() == 0){
        int cur = -Q.top();
        Q.pop();
        cout<<cur<<" ";
        for(int i=0; i<problem[cur].size(); i++){
            int next = problem[cur][i];
            entry[next]--;
            if(entry[next] == 0) Q.push(-next);
        }
    }
}