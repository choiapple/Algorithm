#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin>>N;
    int arr[100001] = {0, };
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    int answer = 1;
    int tmp = 1;
    for(int i=1; i<N; i++){
        if(arr[i] >= arr[i-1]){
            tmp++;
        }else{
            if(answer < tmp){
                answer = tmp;
            }
            tmp = 1;
        }
    }
    if(answer < tmp){
        answer = tmp;
    }
    tmp = 1;
    for(int i=N-1; i>0; i--){
        if(arr[i] <= arr[i-1]){
            tmp++;
        }else{
            if(answer < tmp){
                answer = tmp;
            }
            tmp = 1;
        }
    }
    if(answer < tmp){
        answer = tmp;
    }
    cout<<answer<<"\n";
}