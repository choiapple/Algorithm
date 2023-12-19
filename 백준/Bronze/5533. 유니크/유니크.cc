#include <iostream>
using namespace std;
int main(){
    int N;
    int arr[201][4] = {0, };
    int arr2[201][4] = {0, };
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
        arr2[i][0] = arr[i][0];
        arr2[i][1] = arr[i][1];
        arr2[i][2] = arr[i][2];
    }
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(arr2[i][0] == arr2[j][0]){
                arr[i][0] = 0;
                arr[j][0] = 0;
            }
            if(arr2[i][1] == arr2[j][1]){
                arr[i][1] = 0;
                arr[j][1] = 0;
            }
            if(arr2[i][2] == arr2[j][2]){
                arr[i][2] = 0;
                arr[j][2] = 0;
            }
        }
        
    }
    for(int i=0; i<N; i++){
        int tmp = 0;
        for(int j=0; j<3; j++){
            tmp += arr[i][j];
        }
        cout<<tmp<<"\n";
    }
    return 0;
}