#include <iostream>
using namespace std;
int main(){
    int K, P, M, t, answer;
    cin>>K;
    for(int i=0; i<K; i++){
        cin>>P>>M;
        int arr[501] = {0, };
        answer = 0;
        for(int j=0; j<P; j++){
            cin>>t;
            if(arr[t] == 0){
                arr[t] = 1;
            }else{
                answer++;
            }
        }
        cout<<answer<<"\n";
    }
    return 0;
}