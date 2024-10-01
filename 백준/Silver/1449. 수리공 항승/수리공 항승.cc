#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, L, arr[1001] = {0, }, answer = 0, start = -1;
    cin>>N>>L;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    sort(arr, arr+N);
    for(int i=0; i<N; i++){
        if(start == -1){
            start = arr[i];
            answer++;
        }else{
            if(arr[i] - start + 1 > L){
                start = arr[i];
                answer++;
            }
        }
    }
    cout<<answer<<"\n";
}