#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, cnt = 1, flag = 0, tmp;
    stack<int> st;
    queue<int> q;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>tmp;
        q.push(tmp);
    }
    while(!q.empty()) {
        if(cnt == q.front()){
            q.pop();
            cnt++;
            continue;
        }
        if(st.empty()){
            st.push(q.front());
            q.pop();
            continue;
        }
        if(st.top() == cnt){
            st.pop();
            cnt++;
            continue;
        }
        if(st.top() < q.front()){
            flag = 1;
            break;
        }else{
            st.push(q.front());
            q.pop();
        }
    }
    if(flag == 1){
        cout<<"Sad"<<"\n";
    }else{
        cout<<"Nice"<<"\n";
    }
}