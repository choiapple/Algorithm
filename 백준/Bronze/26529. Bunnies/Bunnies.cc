#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, X;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>X;
        vector<int> vc;
        vc.push_back(1);
        vc.push_back(1);
        for(int i=2; i<=X; i++){
            vc.push_back(vc[i-1] + vc[i-2]);
        }
        cout<<vc[X]<<"\n";
    }
    return 0;
}