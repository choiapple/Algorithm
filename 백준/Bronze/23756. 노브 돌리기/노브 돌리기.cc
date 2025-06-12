#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, arr[101] = {0, }, answer = 0, tmp1, tmp2;
    cin>>N;
    for(int i=0; i<=N; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=N; i++){
        tmp1 = abs(arr[i-1] - arr[i]);
        tmp2 = 360 - abs(arr[i] - arr[i-1]);
        if(tmp1 < tmp2){
            answer += tmp1;
        }else{
            answer += tmp2;
        }
    }
    cout<<answer<<"\n";
    return 0;
}