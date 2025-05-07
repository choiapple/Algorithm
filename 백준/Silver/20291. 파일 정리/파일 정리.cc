#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
string cut(string s){
    int si = s.length(), idx;
    for(int i=0; i<si; i++){
        if(s[i] == '.'){
            idx = i+1;
            break;
        }
    }
    return s.substr(idx);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    string s, tmp;
    map<string, int> m;
    vector<string> vc;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s;
        tmp = cut(s);
        if(m.find(tmp) == m.end()){
            m[tmp] = 1;
            vc.push_back(tmp);
        }else{
            m[tmp]++;
        }
    }
    sort(vc.begin(), vc.end());
    for(int i=0; i<vc.size(); i++){
        cout<<vc[i]<<" "<<m[vc[i]]<<"\n";
    }
    return 0;
}