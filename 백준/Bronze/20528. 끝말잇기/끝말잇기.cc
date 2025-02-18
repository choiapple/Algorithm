#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    string pre, next;
    cin>>N;
    cin>>pre;
    for(int i=1; i<N; i++){
        cin>>next;
        if(pre[0] != next[0]){
            cout<<0<<"\n";
            return 0;
        }
        pre = next;
    }
    cout<<1<<"\n";
    return 0;
}