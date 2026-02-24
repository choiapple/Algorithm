#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, arr[100001] = {0, }, tmp = 0, answer = -1;
    cin>>N>>M;
    for(int n=1; n<=N; n++){
        cin>>arr[n];
    }
    for(int n=N; n>=1; n--){
        tmp += arr[n];
        if(tmp >= M){
            answer = n;
            break;
        }
    }
    cout<<answer<<"\n";
    return 0;
}