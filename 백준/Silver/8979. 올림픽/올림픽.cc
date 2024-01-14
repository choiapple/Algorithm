#include <iostream>
using namespace std;

int main(){
    int N, K, tmp;
    int arr[1001][4] = {0, };
    cin>>N>>K;
    for(int i=0; i<N; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
        if(K == arr[i][0]){
            tmp = i;
        }
    }
    int answer = 0;
    for(int i=0; i<N; i++){
        if(i != tmp){
            if(arr[tmp][1] < arr[i][1]){
                answer++;
            }else if(arr[tmp][1] == arr[i][1]){
                if(arr[tmp][2] < arr[i][2]){
                    answer++;
                }else if(arr[tmp][2] == arr[i][2]){
                    if(arr[tmp][3] < arr[i][3]){
                        answer++;
                    }
                }
            }
        }
    }
    cout<<answer+1<<"\n";
}