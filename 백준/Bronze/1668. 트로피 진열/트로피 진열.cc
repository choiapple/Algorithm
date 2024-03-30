#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100] = {0, };
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int l_c = 0;
    int r_c = 0;
    int left_answer = 0;
    int right_answer = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > l_c){
            l_c = arr[i];
            left_answer++;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(arr[i] > r_c){
            r_c = arr[i];
            right_answer++;
        }
    }
    cout<<left_answer<<"\n"<<right_answer<<"\n";
    return 0;
}