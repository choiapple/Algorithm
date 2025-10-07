#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 300001
using namespace std;
int N, K;
pair<int, int> jewerly[MAX];
int bag[MAX];
priority_queue<int> pq;
long long solve(){
    sort(jewerly, jewerly+N);
    sort(bag, bag+K);
    
    int idx = 0;
    long long sum = 0;
    
    for(int i=0; i<K; i++){
        while(idx < N && bag[i] >= jewerly[idx].first){
            pq.push(jewerly[idx].second);
            idx++;
        }
        if(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N>>K;
    for(int i=0; i<N; i++){
        cin>>jewerly[i].first>>jewerly[i].second;
    }
    for(int i=0; i<K; i++){
        cin>>bag[i];
    }
    cout<<solve();
    return 0;
}