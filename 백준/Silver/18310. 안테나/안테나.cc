#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp;
    vector<int> vc;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        vc.push_back(tmp);
    }
    sort(vc.begin(), vc.end());
    cout<<vc[(N-1)/2]<<"\n";
    return 0;
}