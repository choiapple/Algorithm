#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N, P, tmp;
    cin>>N;
    long long arr[1001] ={0, };
    long long arr2[1001] = {0, };
    for(int i=0; i<N; i++){
        cin>>P;
        long long total = 0;
        for(int j=0; j<P; j++){
            cin>>tmp;
            total += tmp;
        }
        arr[i] = total;
    }
    sort(arr, arr+N);
    arr2[0] = arr[0];
    for(int i=1; i<N; i++){
        arr2[i] = arr2[i-1] + arr[i];
    }
    long long answer = 0;
    for(int i=0; i<N; i++){
        answer += arr2[i];
    }
    cout<<answer<<"\n";
    return 0;
}