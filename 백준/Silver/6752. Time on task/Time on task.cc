#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int T, C;
    cin>>T>>C;
    int arr[101] = {0, };
    for(int i=0; i<C; i++){
        cin>>arr[i];
    }
    sort(arr, arr+C);
    int start = 0;
    int end = 0;
    int answer = 0;
    int tmp = arr[0];
    while(end < C){
        if(tmp < T){
            end++;
            tmp += arr[end];
        }else{
            tmp -= arr[start];
            start++;
        }
        if(tmp <= T && end < C){
            if(answer < end - start + 1){
                answer = end - start + 1;
            }
        }
    }
    cout<<answer<<"\n";

}