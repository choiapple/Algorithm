#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int M, N, arr[11][101] = {0, }, answer = 0;
    cin>>M>>N;
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<M-1; i++){
        for(int j=i+1; j<M; j++){
            int flag = 0;
            for(int k=0; k<N-1; k++){
                for(int x=k+1; x<N; x++){
                    if(arr[i][k] < arr[i][x] && arr[j][k] < arr[j][x]) continue;
                    if(arr[i][k] > arr[i][x] && arr[j][k] > arr[j][x]) continue;
                    if(arr[i][k] == arr[i][x] && arr[j][k] == arr[j][x]) continue;
                    flag = 1;
                    break;
                }
                if(flag == 1){
                    break;
                }
            }
            if(flag == 0){
                answer++;
            }
        }
    }
    cout<<answer<<"\n";
}