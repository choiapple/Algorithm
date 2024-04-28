#include <iostream>
#include <algorithm>
using namespace std;
int N, M;
int arr[8] = {0, };
int map[8] = {0, };
void solve(int x[8], int k){
    if(k == M){
        for(int i=0; i<k; i++){
            cout<<x[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=0; i<N; i++){
        x[k] = map[i];
        solve(x, k+1);
    }
}
int main(){
    cin>>N>>M;
    for(int i=0; i<N; i++){
        cin>>map[i];
    }
    sort(map, map+N);
    solve(arr, 0);
}