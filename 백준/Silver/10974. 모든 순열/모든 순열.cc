#include <iostream>
using namespace std;
int N;
int arr[9];
int visit[9];
void solve(int arr2[9], int cnt){
    
    if(cnt == N){
        for(int n=0; n<N; n++){
            cout<<arr2[n]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=1; i<=N; i++){
        if(visit[i] == 0){
            arr2[cnt] = i;
            visit[i] = 1;
            solve(arr2, cnt+1);
            
            solve(arr2, cnt);
            visit[i] = 0;
        }
    }
}
int main(){
    cin>>N;
    solve(arr, 0);
}