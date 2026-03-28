#include <iostream>
#include <deque>
using namespace std;
int N, K;
deque<char> que;
bool visited[128];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N>>K;
    for(int i=0; i<N; i++){
        que.push_back('?');
    }
    while(K--){
        int M;
        char c;
        cin>>M>>c;
        M--;
        while(M--){
            que.push_back(que.front());
            que.pop_front();
        }
        
        if(que.front() == '?'){
            if(visited[c]){
                cout<<'!';
                return 0;
            }
            que.push_back(c);
            que.pop_front();
            visited[c] = 1;
        }else if(que.front() == c){
            que.push_back(c);
            que.pop_front();
        }else{
            cout<<'!';
            return 0;
        }
    }
    while(!que.empty()){
        cout<<que.back();
        que.pop_back();
    }
}