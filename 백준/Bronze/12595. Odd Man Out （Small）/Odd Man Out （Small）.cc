#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, T, tmp;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>T;
        map<int, int> m;
        for(int j=0; j<T; j++){
            cin>>tmp;
            if(m.find(tmp) != m.end()){
                m[tmp]++;
            }else{
                m[tmp] = 1;
            }
        }
        for(pair<int, int> itr:m){
            if(itr.second == 1){
                cout<<"Case #"<<i+1<<": "<<itr.first<<"\n";
                break;
            }
        }
    }
}