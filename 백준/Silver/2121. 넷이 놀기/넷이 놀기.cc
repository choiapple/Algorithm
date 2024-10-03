#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, A, B, X, Y, answer = 0;
    set<pair<int, int> > s;
    vector<pair<int, int> > vc;
    cin>>N;
    cin>>A>>B;
    vc.resize(N);
    for(int i=0; i<N; i++){
        cin>>vc[i].first>>vc[i].second;
        s.insert(make_pair(vc[i].first, vc[i].second));
    }
    for(int i=0; i<N; i++){
        X = vc[i].first;
        Y = vc[i].second;
        if(s.find(make_pair(X+A, Y)) == s.end()) continue;
        if(s.find(make_pair(X, Y+B)) == s.end()) continue;
        if(s.find(make_pair(X+A, Y+B)) == s.end()) continue;
        answer++;
    }
    cout<<answer<<"\n";
    return 0;
}