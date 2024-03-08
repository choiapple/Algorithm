#include <iostream>
using namespace std;
int main(){
    int N, boat = 0;
    int arr[5001] = {0, };
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    for(int i=1; i<N; i++){
        if(arr[i] == 0) continue;
        int a = arr[i] - arr[0];
        int tmp = 0;
        for(int j=1; j<N; j++){
            if(arr[j] == 0) continue;
            if(arr[j]%a == 1){
                tmp++;
                arr[j] = 0;
            }
        }
        if(tmp != 0){
            boat++;
        }
    }
    cout<<boat<<"\n";
    return 0;
}