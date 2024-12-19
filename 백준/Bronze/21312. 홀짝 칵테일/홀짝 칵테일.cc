#include <iostream>
using namespace std;
int main(){
    int arr[3], answer = 0;
    for(int i=0; i<3; i++){
        cin>>arr[i];
        if(arr[i]%2 == 1){
            if(answer == 0){
                answer += arr[i];
            }else{
                answer *= arr[i];
            }
        }
    }
    if(answer == 0){
        for(int i=0; i<3; i++){
            if(answer == 0){
                answer += arr[i];
            }else{
                answer *= arr[i];
            }
        }
    }
    cout<<answer<<"\n";
}