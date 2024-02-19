#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N, T, S, L, C;
    cin>>N>>T;
    vector<int> vc;
    for(int n=0; n<N; n++){
        cin>>S>>L>>C;
        int tmp = S;
        vc.push_back(tmp);
        for(int c=1; c<C; c++){
            tmp += L;
            vc.push_back(tmp);
        }
    }
    sort(vc.begin(), vc.end());
    int idx = lower_bound(vc.begin(), vc.end(), T) - vc.begin();
    if(idx == vc.size()){
        cout<<-1<<"\n";
    }else{
        cout<<vc[idx] - T<<"\n";
    }
  
}