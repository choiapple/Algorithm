#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, int> m;
    int A, B, tmp;
    cin>>A>>B;
    for(int i=0; i<A; i++){
        cin>>tmp;
        m[tmp] = 1;
    }
    for(int i=0; i<B; i++){
        cin>>tmp;
        m.erase(tmp);
    }
    cout<<m.size()<<"\n";
    for(auto iter:m){
        cout<<iter.first<<" ";
    }
    return 0;
}