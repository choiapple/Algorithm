#include <iostream>
#include <deque>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, A[100001], tmp, M;
    deque<int> dq;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>A[i];
    }
    for(int i=0; i<N; i++){
        cin>>tmp;
        if(A[i] == 0) dq.push_back(tmp);
    }
    cin>>M;
    for(int i=0; i<M; i++){
        cin>>tmp;
        dq.push_front(tmp);
        cout<<dq.back()<<" ";
        dq.pop_back();
    }
}