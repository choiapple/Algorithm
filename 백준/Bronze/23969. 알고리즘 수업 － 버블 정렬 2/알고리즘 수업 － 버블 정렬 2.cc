#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K, arr[10001] = {0, }, cnt = 0, tmp, flag = 0;
    cin>>N>>K;
    for(int n=0; n<N; n++){
        cin>>arr[n];
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N-1; j++){
            if(arr[j] > arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                cnt++;
            }
            if(cnt == K){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }
    if(flag == 1){
        for(int i=0; i<N; i++){
            cout<<arr[i]<<" ";
        }
    }else{
        cout<<-1<<"\n";
    }
}