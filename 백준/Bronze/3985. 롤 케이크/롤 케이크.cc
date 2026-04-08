#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int L, N, p, k, arr[1001] = {0, }, max_n = 0, max_n_idx = 0, answer_n = 0, answer = 0, tmp;
    cin>>L;
    cin>>N;
    for(int n=1; n<=N; n++){
        cin>>p>>k;
        tmp = k - p + 1;
        if(tmp > max_n){
            max_n = tmp;
            max_n_idx = n;
        }
        tmp = 0;
        for(int i=p; i<=k; i++){
            if(arr[i] == 0){
                arr[i] = n;
                tmp++;
            }
        }
        if(tmp > answer_n){
            answer_n = tmp;
            answer = n;
        }
    }
    cout<<max_n_idx<<"\n"<<answer;
    return 0;
}