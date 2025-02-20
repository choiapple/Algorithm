#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K, arr[10001] = {0, }, cnt = 0, tmp, answer, x;
    cin>>N>>K;
    for(int i=1; i<=N; i++){
        cin>>arr[i];
    }
    for(int i=2; i<=N; i++){
        tmp = arr[i];
        x = i - 1;
        while(1 <= x && tmp < arr[x]){
            arr[x+1] = arr[x];
            cnt++;
            if(cnt == K){
                answer = arr[x];
            }
            x--;
        }
        if(x+1 != i){
            arr[x+1] = tmp;
            cnt++;
            if(cnt == K){
                answer = tmp;
            }
        }

    }
    if(cnt < K){
        cout<<-1<<"\n";
    }else{
        cout<<answer<<"\n";
    }
    return 0;
}