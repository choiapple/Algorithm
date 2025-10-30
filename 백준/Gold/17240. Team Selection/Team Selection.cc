#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
vector<pair<int, int> > vc[5];
int visit[20001] = {0, }, answer = 0;
void solve(int sum, int idx) {
    if(idx == 5){
        answer = max(answer, sum);
        return;
    }
    for(int i=0; i<5; i++){
        pair<int, int> p = vc[idx][i];
        if(!visit[p.second]){
            visit[p.second] = 1;
            solve(sum + p.first, idx+1);
            visit[p.second] = 0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp;
    cin>>N;
    for(int n=0; n<N; n++){
        for(int i=0; i<5; i++){
            cin>>tmp;
            vc[i].push_back(make_pair(tmp, n));
        }
    }
    for(int i=0; i<5; i++){
        sort(vc[i].begin(), vc[i].end(), greater<pair<int, int> >());
    }
    solve(0, 0);
    cout<<answer<<"\n";
    return 0;
}