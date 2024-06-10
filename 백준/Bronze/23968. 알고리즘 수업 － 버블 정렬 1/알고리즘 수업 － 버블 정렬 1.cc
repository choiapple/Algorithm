#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K, tmp;
    int arr[10001] = {0, };
    cin>>N>>K;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    int answer = 0;
    for(int i=0; i<N; i++){
        for(int j=1; j<N; j++){
            if(arr[j-1] > arr[j]){
                answer++;
                tmp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = tmp;
            }
            if(answer == K){
                cout<<arr[j-1]<<" "<<arr[j]<<"\n";
                return 0;
            }
        }
    }
    if(answer < K){
        cout<<-1<<"\n";
    }
    
}