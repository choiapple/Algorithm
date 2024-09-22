#include <iostream>
using namespace std;
int main(){
    int N, arr[101] = {0, }, tmp;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        arr[tmp]++;
    }
    int max_n = 0;
    int answer = 0;
    for(int i=1; i<=N; i++){
        if(max_n < arr[i]){
            max_n = arr[i];
            answer = i;
        }
    }
    for(int i=1; i<=N; i++){
        if(max_n == arr[i] && answer != i){
            cout<<"skipped"<<"\n";
            return 0;
        }
    }
    cout<<answer<<"\n";
    return 0;
}