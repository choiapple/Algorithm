#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, idx, cnt = 0;
    string S, name, answer, S_answer;
    vector<pair<string, string> > vc;
    cin>>N>>S;
    for(int i=0; i<N; i++){
        cin>>name>>answer;
        if(name == S){
            S_answer = answer;
            idx = i;
        }
        vc.push_back(make_pair(name, answer));
    }
    for(int i=0; i<idx; i++){
        if(vc[i].second == S_answer){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}