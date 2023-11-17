#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    long long arr[100] = {0, };
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 2;
    for(int i=4; i<=80; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout<<arr[N]*4+arr[N-1]*2<<"\n";
}