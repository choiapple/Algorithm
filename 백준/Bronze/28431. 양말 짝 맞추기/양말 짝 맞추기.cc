#include <iostream>
using namespace std;
int main(){
    int arr[11] = {0, }, tmp;
    for(int i=0; i<5; i++){
        cin>>tmp;
        arr[tmp]++;
        if(arr[tmp] == 2){
            arr[tmp] = 0;
        }
    }
    for(int i=0; i<10; i++){
        if(arr[i] == 1){
            cout<<i<<"\n";
        }
    }
}