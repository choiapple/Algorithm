#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, H, arr[1000001] = {0, }, answer = -1;
    cin>>N>>H;
    for(int n=0; n<N; n++){
        cin>>arr[n];
    }
    for(int n=0; n<N; n++){
        H -= arr[n];
        if(H <= 0){
            answer = n+1;
            break;
        }
    }
    cout<<answer<<"\n";
    return 0;
}