#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, S, E, answer = 2147000000, ti[1001] = {0, }, total = 0, tmp = 0;
    vector<pair<int, int> > vc;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>S>>E;
        vc.push_back(make_pair(S, E));
        for(int j=S; j<E; j++){
            if(ti[j] == 0){
                total++;
            }
            ti[j]++;
        }
    }
    for(int i=0; i<N; i++){
        tmp = 0;
        for(int j=vc[i].first; j<vc[i].second; j++){
            if(ti[j] <= 1){
                tmp++;
            }
        }
        answer = min(answer, tmp);
    }
    cout<<total - answer<<"\n";
    
}