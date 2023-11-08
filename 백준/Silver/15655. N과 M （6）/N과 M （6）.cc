#include <iostream>
#include <algorithm>
using namespace std;
int N, M;
int arr[9];
int arr2[9];
int visit[9];
void solve(int arr3[9], int cnt){
    if(cnt == M){
        for(int n=0; n<M; n++){
            cout<<arr3[n]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int n=0; n<N; n++){
        if(visit[n] == 0){
            if(cnt == 0){
                visit[n] = 1;
                arr3[cnt] = arr[n];
                solve(arr3, cnt+1);
                visit[n] = 0;
            }else if(arr3[cnt-1] < arr[n]){
                visit[n] = 1;
                arr3[cnt] = arr[n];
                solve(arr3, cnt+1);
                visit[n] = 0;
            }
        }
    }
}
int main(){
    cin>>N>>M;
    for(int n=0; n<N; n++){
        cin>>arr[n];
    }
    sort(arr, arr+N);
    solve(arr2, 0);
}