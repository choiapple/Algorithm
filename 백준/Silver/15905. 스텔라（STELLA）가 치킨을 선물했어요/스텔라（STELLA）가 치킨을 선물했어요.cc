#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first){
        return a.first > b.first;
    }else{
        return a.second < b.second;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, a, b, answer = 0;
    vector<pair<int, int> > vc;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>a>>b;
        vc.push_back(make_pair(a, b));
    }
    sort(vc.begin(), vc.end(), compare);
    for(int i=5; i<N; i++){
        if(vc[4].first == vc[i].first) answer++;
        else break;
    }
    cout<<answer;
    return 0;
}