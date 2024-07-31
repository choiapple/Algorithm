#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int A, B, C = 0, arr[11] = {0, };
    cin>>A>>B;
    for(int i=9; i>=0; i--){
        if(A - pow(2, i) >= 0){
            A -= pow(2, i);
            arr[i]++;
        }
        if(B - pow(2, i) >= 0){
            B -= pow(2, i);
            arr[i]++;
        }
    }
    for(int i=0; i<=9; i++){
        if(arr[i] == 1){
            C += pow(2, i);
        }
    }
    cout<<C<<"\n";
    return 0;
}