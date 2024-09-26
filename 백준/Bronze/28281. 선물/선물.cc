#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, X, arr[100001] = {0, }, answer = 2147000000;
    cin>>N>>X;
    cin>>arr[0];
    for(int i=1; i<N; i++){
        cin>>arr[i];
        if(answer > arr[i] + arr[i-1]){
            answer = arr[i] + arr[i-1];
        }
    }
    cout<<answer * X<<"\n";
}