#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<fixed;
    cout.precision(3);
    int N;
    cin>>N;
    double arr[10000001] = {0, };
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    sort(arr, arr+N);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<"\n";
    }
}