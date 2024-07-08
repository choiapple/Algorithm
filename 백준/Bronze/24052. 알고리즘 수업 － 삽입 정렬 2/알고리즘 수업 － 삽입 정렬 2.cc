#include <iostream>
using namespace std;
int tmp, N, K, arr[10001] = {0, }, ch = 0;
void result(){
    for(int k=1; k<=N; k++){
        cout<<arr[k]<<" ";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N>>K;
    for(int i=1; i<=N; i++){
        cin>>arr[i];
    }
    for(int i=2; i<=N; i++){
        tmp = arr[i];
        for(int j=i-1; j>=0; j--){
            if(tmp < arr[j]){
                arr[j+1] = arr[j];
                ch++;
                if(ch == K){
                   result();
                   return 0;
                }
            }else {
                arr[j+1] = tmp;
                if(j+1 != i){
                    ch++;
                }
                if(ch == K){
                    result();
                    return 0;
                }
                break;
            }
        }
    }
    if(ch < K){
        cout<<-1<<"\n";
    }
}