#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string, int> m;
    m["STRAWBERRY"] = 0;
    m["BANANA"] = 0;
    m["LIME"] = 0;
    m["PLUM"] = 0;
    int N, tmp, flag = 0;
    string s;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s>>tmp;
        m[s] += tmp;
    }
    for(pair<string, int> itr : m){
        if(itr.second == 5){
            flag = 1;
        }
    }
    if(flag == 1){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
}