#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a, int b){
    return a > b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    int arr[100001] = {0, };
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>arr[n];
    }
    sort(arr, arr+N, cmp);
    int answer = 1;
    for(int i=0; i<N; i++){
        if(answer < arr[i] + i + 1){
            answer = arr[i] + i + 1;
        }
    }
    cout<<answer+1<<"\n";
}