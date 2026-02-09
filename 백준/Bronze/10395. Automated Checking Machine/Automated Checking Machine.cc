#include <iostream>
using namespace std;
int main(){
    int arr1[5] = {0, }, arr2[5] = {0, };
    char flag = 'Y';
    for(int i=0; i<5; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<5; i++){
        cin>>arr2[i];
    }
    for(int i=0; i<5; i++){
        if(arr1[i] != arr2[i]) continue;
        flag = 'N';
    }
    cout<<flag;
    return 0;
}