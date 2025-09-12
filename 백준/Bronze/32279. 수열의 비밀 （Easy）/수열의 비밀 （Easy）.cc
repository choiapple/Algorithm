#include <iostream>
using namespace std;
int main(){
    int n, p, q, r, s, arr[21] = {0, }, answer = 0;
    cin>>n;
    cin>>p>>q>>r>>s;
    cin>>arr[1];
    answer += arr[1];
    for(int i=2; i<=n; i++){
        if(i%2 == 0){
            arr[i] = p*arr[i/2] + q;
        }else{
            arr[i] = r*arr[(i-1)/2] + s;
        }
        answer += arr[i];
    }
    cout<<answer<<"\n";
    return 0;
}