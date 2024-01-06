#include <iostream>
using namespace std;
int main(){
    int N, D, C;
    int answer = 0;
    int arr[10001][2] = {0, };
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    for(int i=0; i<N; i++){
        D = arr[i][0];
        C = arr[i][1];
        int flag = 0;
        for(int j=0; j<N; j++){
            int flag1 = 0;
            if(i != j){
                if(D > arr[j][0] && C >= arr[j][1]){
                    flag1 = 1;
                }
                if(C > arr[j][1] && D >= arr[j][0]){
                    flag1 = 1;
                }
            }
            if(i != j && flag1 == 1){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            answer++;
        }
        
    }
    cout<<answer<<"\n";
    return 0;
    
}