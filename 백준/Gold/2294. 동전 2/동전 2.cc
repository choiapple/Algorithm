#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n, k, tmp;
    int arr[101] = {0,};
    int arr2[100001];
    cin>>n>>k;
    for(int i=0; i<100001; i++){
        arr2[i] = 100001;
    }
    for(int i=0; i<n; i++){
        cin>>arr[i];
        arr2[arr[i]] = 1;
    }
    for(int i=1; i<=k; i++){
        for(int j=0; j<n; j++){
            if(i > arr[j]){
                arr2[i] = min(arr2[i-arr[j]] + 1, arr2[i]);
            }
        }
    }
    if(arr2[k] == 100001){
        cout<<-1<<"\n";
    }else{
        cout<<arr2[k]<<"\n";
    }
    
}