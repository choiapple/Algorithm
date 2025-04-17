#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, tmp, st, en, mid;
    string s;
    vector<pair<string, int> > vc;
    cin>>N>>M;
    for(int i=0; i<N; i++){
        cin>>s>>tmp;
        vc.push_back(make_pair(s, tmp));
    }
    for(int i=0; i<M; i++){
        cin>>tmp;
        st = 0;
        en = N-1;
        while(st < en){
            mid = (st + en) / 2;
            if(vc[mid].second < tmp){
                st = mid + 1;
            }else{
                en = mid;
            }
        }
        cout<<vc[st].first<<"\n";
    }
}