#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, K, cnt =101, pe, x;
    long long tmp = 0;
    cin>>N>>M>>K;
    for(int i=1; i<=N; i++){
        tmp = 0;
        for(int j=1; j<=M; j++){
            cin>>x;
            tmp += x;
            if(tmp >= K && cnt > j){
                cnt = j;
                pe = i;
            }
        }
    }
    cout<<pe<<" "<<cnt<<"\n";
    return 0;
}