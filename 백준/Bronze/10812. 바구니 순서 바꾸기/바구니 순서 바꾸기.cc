#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, cur[101] = {0, }, pre[101] = {0, }, i, j, k, begin;
    cin>>N>>M;
    for(int n=1; n<=N; n++){
        pre[n] = n;
        cur[n] = n;
    }
    for(int m=0; m<M; m++){
        cin>>i>>j>>k;
        begin = i;
        for(int mid=k; mid<=j; mid++){
            cur[begin++] = pre[mid];
        }
        for(int x=i; x<k; x++){
            cur[begin++] = pre[x];
        }
        for(int x=i; x<=j; x++){
            pre[x] = cur[x];
        }
    }
    for(int n=1; n<=N; n++){
        cout<<cur[n]<<" ";
    }
    return 0;
}