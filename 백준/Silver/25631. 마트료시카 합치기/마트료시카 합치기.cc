#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, arr[1001] = {0, }, visit[1001] = {0, }, cur, cnt = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    sort(arr, arr+N);
    for(int i=0; i<N; i++){
        if(visit[i] == 1) continue;
        cur = arr[i];
        visit[i] = 1;
        for(int j=i+1; j<N; j++){
            if(visit[j] == 0 && cur < arr[j]){
                cur = arr[j];
                visit[j] = 1;
            }
        }
        cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}