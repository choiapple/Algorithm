#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int map[100001] = {0, }, N, Q, tmp, idx = 0;
    cin>>N>>Q;
    for(int n=1; n<=N; n++){
        cin>>tmp;
        for(int i=0; i<tmp; i++){
            map[idx++] = n;
        }
    }
    for(int i=0; i<Q; i++){
        cin>>tmp;
        cout<<map[tmp]<<"\n";
    }
    return 0;
}