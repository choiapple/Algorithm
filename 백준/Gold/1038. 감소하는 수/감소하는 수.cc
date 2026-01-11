#include <iostream>
#include <queue>
using namespace std;
int N;
long long DP[10000010];
int main(){
    cin>>N;
    if(0 <= N && N <= 10){
        cout<<N<<"\n";
        return 0;
    }
    queue<long long> q;
    for(int i=1; i<=9; i++){
        q.push(i);
        DP[i] = i;
    }
    int idx = 10;
    while(idx <= N && q.empty() == false){
        long long num = q.front();
        q.pop();
        int last = num % 10;
        for(int i=0; i<last; i++){
            q.push(num*10 + i);
            DP[idx++] = num * 10 + i;
        }
    }
    if(idx >= N && DP[N] != 0) cout<<DP[N]<<"\n";
    else cout<<-1<<"\n";
    return 0;
}