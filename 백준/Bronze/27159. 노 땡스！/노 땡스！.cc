#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, arr[50], answer = 0;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>arr[n];
    }
    answer += arr[0];
    for(int n=1; n<N; n++){
        if(arr[n] - arr[n-1] == 1) continue;
        answer += arr[n];
    }
    cout<<answer;
    return 0;
}