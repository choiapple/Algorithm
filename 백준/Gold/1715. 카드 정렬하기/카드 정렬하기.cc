#include <iostream>
#include <queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, x, y;
    priority_queue<int, vector<int>, greater<int> > pq;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        pq.push(tmp);
    }
    long long answer = 0;
    while(pq.size() != 1){
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();
        answer += x + y;
        pq.push(x+y);
    }
    cout<<answer<<"\n";
    return 0;
}