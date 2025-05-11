#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, p, l, answer = 0;
    vector<int> vc;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>p>>l;
        int pl[101] = {0, };
        for(int j=0; j<p; j++){
            cin>>pl[j];
        }
        sort(pl, pl+p, greater<int>());
        if(l > p){
            vc.push_back(1);
        }else{
            vc.push_back(pl[l-1]);
        }
    }
    sort(vc.begin(), vc.end());
    for(int i=0; i<vc.size(); i++){
        if(m - vc[i] >= 0){
            answer++;
            m -= vc[i];
        }
    }
    cout<<answer<<"\n";
    return 0;
}