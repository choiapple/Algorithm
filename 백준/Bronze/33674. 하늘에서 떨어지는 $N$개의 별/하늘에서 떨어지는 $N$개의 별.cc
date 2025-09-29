#include <iostream>
using namespace std;
int arr[101] = {0, }, arr2[101] = {0, };
bool check(int N, int K){
    bool flag = true;
    for(int n=0; n<N; n++){
        if(arr[n] + arr2[n] > K){
            flag = false;
            break;
        }
    }
    return flag;
}
int main(){
    int N, D, K, answer = 0;
    cin>>N>>D>>K;
    for(int n=0; n<N; n++){
        cin>>arr2[n];
    }
    for(int d=0; d<D; d++){
        if(!check(N, K)){
            answer++;
            for(int n=0; n<N; n++){
                arr[n] = arr2[n];
            }
        }else{
            for(int n=0; n<N; n++){
                arr[n] += arr2[n];
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}