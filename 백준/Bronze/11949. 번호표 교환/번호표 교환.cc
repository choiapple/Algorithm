#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, tmp;
    int arr[101] = {0, };
    cin>>N>>M;
    for(int i=1; i<=N; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=M; i++){
        for(int j=1; j<N; j++){
            if(arr[j]%i > arr[j+1]%i){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    for(int i=1; i<=N; i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}