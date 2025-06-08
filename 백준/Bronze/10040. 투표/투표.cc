#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, arr_n[1001] = {0, }, visit[1001] = {0, }, tmp, answer, answer_max = 0;
    cin>>N>>M;
    for(int n=1; n<=N; n++){
        cin>>arr_n[n];
    }
    for(int m=0; m<M; m++){
        cin>>tmp;
        for(int n=1; n<=N; n++){
            if(arr_n[n] <= tmp){
                visit[n]++;
                break;
            }
        }
    }
    for(int n=1; n<=N; n++){
        if(answer_max < visit[n]){
            answer_max = visit[n];
            answer = n;
        }
    }
    cout<<answer<<"\n";
    return 0;
}