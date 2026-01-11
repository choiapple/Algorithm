#include <iostream>
#include <queue>
using namespace std;
int N;
long long answer = 0;
int main(){
    cin>>N;
    if(0 <= N && N <= 10){
        cout<<N<<"\n";
        return 0;
    }
    queue<long long> q;
    for(int i=1; i<=9; i++){
        q.push(i);
    }
    int idx = 10;
    while(idx <= N && q.empty() == false){
        long long num = q.front();
        q.pop();
        int last = num % 10;
        for(int i=0; i<last; i++){
            q.push(num*10 + i);
            if(idx == N) answer = num*10 + i;
            idx++;
        }
    }
    if(idx >= N && answer != 0) cout<<answer<<"\n";
    else cout<<-1<<"\n";
    return 0;
}