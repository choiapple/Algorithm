#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, answer, K;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N;
        int arr[101] = {0, };
        for(int n=0; n<N; n++){
            cin>>arr[n];
        }
        answer = 1;
        K = 0;
        while(K<N){
            if(arr[K] != answer){
                answer++;
                K++;
            }else{
                answer++;
            }
        }
        cout<<answer-1<<"\n";
    }
}