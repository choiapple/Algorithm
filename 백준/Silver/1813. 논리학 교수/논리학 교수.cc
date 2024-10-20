#include <iostream>
using namespace std;
int main(){
    int N, tmp, answer = -1, arr[51] = {0, }, max_n = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        arr[tmp]++;
        if(tmp > max_n){
            max_n = tmp;
        }
    }
    for(int i=0; i<=max_n; i++){
        if(arr[i] == i){
            answer = i;
        }
    }
    cout<<answer<<"\n";
    return 0;
}