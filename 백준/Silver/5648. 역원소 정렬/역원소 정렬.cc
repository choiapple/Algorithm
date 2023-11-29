#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long N;
    cin>>N;
    long long arr[1000001] = {0, };
    long long tmp;
    for(int i=0; i<N; i++){
        cin>>tmp;
        long long tmp2 = 0;
        while(tmp > 0){
            tmp2 = tmp2*10 + tmp%10;
            tmp/=10;
        }
        arr[i] = tmp2;
    }
    sort(arr, arr+N);
    for(int i=0; i<N; i++){
        cout<<arr[i]<<"\n";
    }
}