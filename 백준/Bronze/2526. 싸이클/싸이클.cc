#include <iostream>
using namespace std;
int main(){
    int N, P;
    int arr[1001] = {0, };
    cin>>N>>P;
    int tmp = N;
    while(true){
        tmp = (tmp * N) % P;
        arr[tmp]++;
        if(arr[tmp] >= 3){
            break;
        }
    }
    int answer = 0;
    for(int i=0; i<1001; i++){
        if(arr[i] >= 2){
            answer++;
        }
    }
    cout<<answer<<"\n";
    return 0;
}