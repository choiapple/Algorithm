#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[5001] = {0, };
    int n;
    cin>>n;
    long long tmp = 0;
    long long answer  = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        tmp += arr[i];
    }
    for(int i=0; i<n; i++){
        answer += arr[i] * (tmp - arr[i]);
        tmp -= arr[i];
    }
    cout<<answer<<"\n";
    return 0;
}