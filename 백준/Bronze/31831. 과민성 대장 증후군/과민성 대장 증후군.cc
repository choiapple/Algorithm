#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long N, M, arr[100001] = {0, }, tmp, answer = 0;
    cin>>N>>M;
    for(int i=1; i<=N; i++){
        cin>>tmp;
        arr[i] = arr[i-1] + tmp;
        if(arr[i] <= 0) arr[i] = 0;
        if(arr[i] >= M) answer++;
    }
    cout<<answer<<"\n";
}