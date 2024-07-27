#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> vc[100001];
    int N, M, A, B;
    cin>>N>>M;
    for(int i=0; i<M; i++){
        cin>>A>>B;
        vc[A].push_back(B);
        vc[B].push_back(A);
    }
    for(int i=1; i<=N; i++){
        cout<<vc[i].size()<<"\n";
    }
    return 0;
}