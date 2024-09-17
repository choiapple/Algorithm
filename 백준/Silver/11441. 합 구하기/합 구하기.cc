#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, arr[100001], M, mi, mj, sum = 0, tmp;
    cin>>N;
    for(int i=1; i<=N; i++){
        cin>>tmp;
        sum += tmp;
        arr[i] = sum;
    }
    cin>>M;
    for(int i=0; i<M; i++){
        cin>>mi>>mj;
        cout<<arr[mj] - arr[mi-1]<<"\n";
    }
}