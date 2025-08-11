#include <iostream>
#include <queue>
using namespace std;
pair<int, int> answer = {0, 0};
queue<int> q;
void fn(int b){
    q.push(b);
    if(q.size() == answer.first){
        if(b < answer.second){
            answer.second = b;
        }
    }else if(q.size() > answer.first){
        answer.first = q.size();
        answer.second = b;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, a, b;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>a;
        if(a == 1){
            cin>>b;
            fn(b);
        }else{
            q.pop();
        }
    }
    cout<<answer.first<<" "<<answer.second<<"\n";
    return 0;
}