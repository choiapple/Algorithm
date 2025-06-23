#include <iostream>
using namespace std;
int main(){
    int N, arr[10001] = {0, }, Q, L, I, answer = 0;
    cin>>N>>Q;
    for(int q=0; q<Q; q++){
        cin>>L>>I;
        for(int i=L; i<=N; i+=I){
            if(arr[i] == 0){
                arr[i] = 1;
            }
        }
    }
    for(int i=1; i<=N; i++){
        if(arr[i] == 0) answer++;
    }
    cout<<answer<<"\n";
    return 0;
}