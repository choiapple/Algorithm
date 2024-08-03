#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    string rabbit_name1, rabbit_name2;
    map<string, int> m;
    cin>>N;
    m["ChongChong"] = 0;
    for(int i=0; i<N; i++){
        cin>>rabbit_name1>>rabbit_name2;
        if(m.find(rabbit_name1) != m.end() || m.find(rabbit_name2) != m.end()){
            m[rabbit_name1] = 0;
            m[rabbit_name2] = 0;
        }
    }
    cout<<m.size()<<"\n";
    return 0;
}