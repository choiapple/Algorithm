#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[4] = {0, };
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }
    sort(arr, arr+3);
    if(arr[0] == arr[1] && arr[1] == arr[2]){
        cout<<2<<"\n";
    }else if(arr[0]*arr[0] + arr[1]*arr[1] == arr[2]*arr[2]){
        cout<<1<<"\n";
    }else{
        cout<<0<<"\n";
    }
}