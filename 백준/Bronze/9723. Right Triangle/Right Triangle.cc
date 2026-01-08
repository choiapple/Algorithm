#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, arr[3] = {0, };;
    cin>>T;
    for(int t=1; t<=T; t++){
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr, arr+3);
        cout<<"Case #"<<t<<": ";
        if(pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2)){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}