#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int  N, K, tmp;
    vector<int> vc;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        vc.push_back(tmp);
    }
    cin>>K;
    for(int i=N/2; i>=1; i/=2){
        tmp = N/i;
        for(int j=0; j<N; j+=tmp){
            sort(vc.begin()+j, vc.begin()+j+tmp);
        }
        if(i == K) break;
    }
    for(int i=0; i<N; i++){
        cout<<vc[i]<<" ";
    }
    return 0;
}