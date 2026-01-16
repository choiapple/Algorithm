#include <iostream>
using namespace std;
int main(){
    int N, M, arr[11] = {0, }, answer = 0, tmp;
    cin>>N;
    for(int i=1; i<=N; i++){
        cin>>arr[i];
    }
    cin>>M;
    for(int m=0; m<M; m++){
        cin>>tmp;
        answer += arr[tmp];
    }
    cout<<answer;
    return 0;
}