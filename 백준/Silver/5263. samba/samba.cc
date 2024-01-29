#include <iostream>
#include <map>
using namespace std;
int main(){
    int n, k;
    string s;
    map<string, long long> m;
    cin>>n>>k;
    string answer;
    for(int i=0; i<n; i++){
        cin>>s;
        if(m.find(s) != m.end()){
            m[s]++;
        }else{
            m.insert({s, 1});
        }
    }
    for(auto iter : m){
        if(iter.second%k != 0){
            answer = iter.first;
        }
    }
    cout<<answer<<"\n";
    return 0;
}