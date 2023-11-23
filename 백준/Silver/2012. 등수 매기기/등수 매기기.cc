#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin>>N;
    int arr[500001] = {0, };
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    sort(arr, arr+N);
    long long answer = 0;
    for(int i=0; i<N; i++){
        answer += abs(i + 1 - arr[i]);
    }
    cout<<answer<<"\n";
    
}