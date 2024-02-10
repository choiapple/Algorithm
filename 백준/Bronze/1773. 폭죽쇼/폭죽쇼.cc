#include <iostream>
using namespace std;
int main(){
    int N, C;
    cin>>N>>C;
    int arr[2000001] = {0, };
    int peo[101] = {0, };
    for(int i=0; i<N; i++){
        cin>>peo[i];
    }
    for(int i=0; i<N; i++){
        int tmp = peo[i];
        for(int j=tmp; j<=C; j+=tmp){
            arr[j] = 1;
        }
    }
    int answer = 0;
    for(int i=0; i<=C; i++){
        if(arr[i] == 1){
            answer++;
        }
    }
    cout<<answer<<"\n";
    return 0;
}