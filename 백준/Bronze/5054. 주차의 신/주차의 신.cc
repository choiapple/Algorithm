#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t, n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        int arr[22] = {0, };
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        sort(arr, arr+n);
        int answer = 0;
        for(int j=1; j<n; j++){
            answer += arr[j] - arr[j-1];
        }
        answer += arr[n-1] - arr[0];
        cout<<answer<<"\n";
    }
}