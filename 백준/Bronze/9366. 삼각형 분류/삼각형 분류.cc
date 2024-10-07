#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, arr[3] = {0, };
    cin>>T;
    for(int i=1; i<=T; i++){
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr, arr+3);
        cout<<"Case #"<<i<<": ";
        if(arr[2] < arr[0] + arr[1]){
            if(arr[2] == arr[1] && arr[1] == arr[0]){
                cout<<"equilateral";
            }else if(arr[2] == arr[1] || arr[1] == arr[0] || arr[2] == arr[0]){
                cout<<"isosceles";
            }else{
                cout<<"scalene";
            }
        }else{
            cout<<"invalid!";
        }
        cout<<"\n";
    }
}