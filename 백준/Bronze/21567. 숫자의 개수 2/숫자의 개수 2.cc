#include <iostream>
using namespace std;
int main(){
    long long A, B, C;
    cin>>A>>B>>C;
    long long tmp = A * B * C;
    int arr[10] = {0, };
    while(tmp > 0){
        int t = tmp%10;
        arr[t]++;
        tmp /= 10;
    }
    for(int i=0; i<10; i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}