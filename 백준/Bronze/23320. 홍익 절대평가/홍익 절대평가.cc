#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, arr[101], X, Y, cnt = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    cin>>X>>Y;
    for(int i=0; i<N; i++){
        if(arr[i] >= Y){
            cnt++;
        }
    }
    cout<<N*X/100<<" "<<cnt<<"\n";
    return 0;
}