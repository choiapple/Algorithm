#include <iostream>
#include <algorithm>
using namespace std;
int N, s, e;
pair<int, int> a[2000001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s>>e;
        a[i] = {s, 1};
        a[i+N] = {e, -1};
    }
    sort(a, a+2*N);
    int ans = 0, cnt = 0;
    for(int i=0; i<2*N; i++){
        cnt += a[i].second;
        ans = max(ans, cnt);
    }
    cout<<ans<<"\n";
    return 0;
}