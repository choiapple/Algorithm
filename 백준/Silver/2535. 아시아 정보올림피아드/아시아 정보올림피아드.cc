#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b){
    return a.first > b.first;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, con, stu, sco;
    map<int, int> m;
    vector<pair<int, pair<int, int> > >vc;
    vector<pair<int, int> > answer;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>con>>stu>>sco;
        vc.push_back(make_pair(sco, make_pair(con, stu)));
        m[con] = 0;
    }
    sort(vc.begin(), vc.end(), compare);
    for(int i=0; i<N; i++){
        if(m[vc[i].second.first] < 2){
            m[vc[i].second.first]++;
            answer.push_back(make_pair(vc[i].second.first, vc[i].second.second));
        }else{
            continue;
        }
        if(answer.size() == 3) break;
    }
    for(int i=0; i<3; i++){
        cout<<answer[i].first<<" "<<answer[i].second<<"\n";
    }
}