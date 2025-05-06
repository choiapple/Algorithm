#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    string s;
    map<string, int> m;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>s;
        if(m.find(s) == m.end()){
            m[s] = 1;
        }else{
            m[s]++;
        }
    }
    for(int n=0; n<N-1; n++){
        cin>>s;
        if(m[s] - 1 > 0){
            m[s]--;
        }else{
            m.erase(s);
        }
    }
    for(auto iter = m.begin(); iter != m.end(); iter++){
        cout<<iter->first<<"\n";
    }
    return 0;
}