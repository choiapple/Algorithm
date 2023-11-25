#include <iostream>
using namespace std;
int main(){
    int arr[10] = {0, };
    int arr2[10] = {0, };
    int tmp = 0;
    int flag = 0;
    for(int i=0; i<9; i++){
        cin>>arr[i];
    }
    for(int i=0; i<9; i++){
        cin>>arr2[i];
    }
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0; i<9; i++){
        sum1 += arr[i];
        if(sum1 > sum2){
            flag = 1;
        }
        sum2 += arr2[i];
    }
    
    if(flag == 0){
        cout<<"No"<<"\n";
    }else{
        cout<<"Yes"<<"\n";
    }
}