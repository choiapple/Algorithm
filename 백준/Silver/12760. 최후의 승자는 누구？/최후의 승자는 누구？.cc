#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, arr[101][101] = {0, }, score[101] = {0, }, max = 0, max_score = 0;
    cin>>N>>M;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>arr[i][j];
        }
        sort(arr[i], arr[i]+M);
    }
    for(int i=0; i<M; i++){
        max = 0;
        for(int j=0; j<N; j++){
            if(max < arr[j][i]){
                max = arr[j][i];
            }
        }
        for(int j=0; j<N; j++){
            if(max == arr[j][i]){
                score[j]++;
            }
        }
    }
    for(int i=0; i<N; i++){
        if(max_score < score[i]){
            max_score = score[i];
        }
    }
    for(int i=0; i<N; i++){
        if(max_score == score[i]){
            cout<<i+1<<" ";
        }
    }
}