#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    string s[6], ss[6];
    cin>>N>>M;
    for(int n=0; n<N; n++){
        cin>>s[n];
    }
    for(int m=0; m<M; m++){
        cin>>ss[m];
    }
    for(int n=0; n<N; n++){
        for(int m=0; m<M; m++){
            cout<<s[n]<<" as "<<ss[m]<<"\n";
        }
    }
    return 0;
}