#include <iostream>
using namespace std;
int N;
int arr[9] = {0, };
int tmp[9] = {0, };
int visit[9] = {0, };
int answer = 0;
void solve(int a[9], int b[9], int idx){
    if(idx == N){
        int t = 0;
        for(int i=0; i<N-1; i++){
            t += abs(b[i] - b[i+1]);
        }
        if(t > answer){
            answer = t;
        }
        return;
    }
    for(int i=0; i<N; i++){
        if(visit[i] == 0){
            b[idx] = a[i];
            visit[i] = 1;
            solve(a, b, idx+1);
            visit[i] = 0;
        }
    }
    
}
int main(){
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    solve(arr, tmp, 0);
    cout<<answer<<"\n";
}