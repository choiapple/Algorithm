#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[1001][7] = {0, };
    for(int i=0; i<N; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
            arr[i][5] += arr[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<5; j++){
            for(int k=j+1; k<5; k++){
                if((arr[i][5]-arr[i][j]-arr[i][k])%10 > arr[i][6]){
                    arr[i][6] = (arr[i][5]-arr[i][j]-arr[i][k])%10;
                }
            }
        }
    }
    int answer = 0;
    int min_n = 0;
    for(int i=0; i<N; i++){
        if(arr[i][6] >= min_n){
            min_n = arr[i][6];
            answer = i;
        }
    }
    cout<<answer+1<<"\n";
}