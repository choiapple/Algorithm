#include <iostream>
using namespace std;
int main(){
    int arr[9] = {0, }, answer = 0, tmp, k;
    for(int i=0; i<8; i++){
        cin>>arr[i];
    }
    for(int i=0; i<8; i++){
        tmp = 0;
        for(int j=i; j<i+4; j++){
            k = j%8;
            tmp += arr[k];
        }
        if(tmp > answer) answer = tmp;
    }
    cout<<answer;
    return 0;
}