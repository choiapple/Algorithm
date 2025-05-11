#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, cnt = 0, num, que_num, tmp;
    string team_name, girl_name, que;
    vector<vector<string> > vc;
    map<string, int> team;
    map<string, string> girl_team;
    cin>>N>>M;
    for(int n=0; n<N; n++){
        cin>>team_name;
        cin>>num;
        team[team_name] = cnt++;
        vector<string> girl;
        for(int i=0; i<num; i++){
            cin>>girl_name;
            girl.push_back(girl_name);
            girl_team[girl_name] = team_name;
        }
        sort(girl.begin(), girl.end());
        vc.push_back(girl);
    }
    for(int m=0; m<M; m++){
        cin>>que;
        cin>>que_num;
        if(que_num == 1){
            cout<<girl_team[que]<<"\n";
        }else{
            tmp = team[que];
            for(int i=0; i<vc[tmp].size(); i++){
                cout<<vc[tmp][i]<<"\n";
            }
        }
    }
}