#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    string s, answer;
    cin>>N;
    map<string, int> m;
    for(int n=0; n<N; n++){
        cin>>s;
        m[s] = 1;
    }
    for(int n=1; n<N; n++){
        cin>>s;
        m[s] = 0;
    }
    for(auto it = m.begin(); it != m.end(); it++){
        if(it -> second == 1){
            answer = it -> first;
        }
    }
    cout<<answer<<"\n";
}