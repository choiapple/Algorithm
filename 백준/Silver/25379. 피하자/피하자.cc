#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long N, cnt = 0, cnt1 = 0, c = 0, c1 = 0;
    int arr[1000001] = {0, };
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    for(int i=0; i<N; i++){
        if(arr[i]%2 == 0){
            c++;
            cnt1 += c1;
        }else{
            c1++;
            cnt += c;
        }
    }
    cout<<min(cnt, cnt1)<<"\n";
    return 0;
}