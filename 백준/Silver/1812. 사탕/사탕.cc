#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[1000] = {0, };
    int answer[1000] = {0, };
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    int tmp = arr[0];
    for(int i=1; i<N; i++){
        if(i%2 == 1){
            tmp -= arr[i];
        }else{
            tmp += arr[i];
        }
    }
    answer[0] = tmp/2;
    for(int i=1; i<N; i++){
        answer[i] = arr[i-1] - answer[i-1];
    }
    for(int i=0; i<N; i++){
        cout<<answer[i]<<"\n";
    }
    return 0;
}