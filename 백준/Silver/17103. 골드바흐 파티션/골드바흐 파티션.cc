#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, answer, arr[1000001] = {0, };
    for(int i=2; i<=1000000; i++){
        if(arr[i] == -1) continue;
        for(int j=i+i; j<=1000000; j+=i){
            arr[j] = -1;
        }
    }
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>N;
        answer = 0;
        for(int j=2; j<=N/2; j++){
            if(arr[j] == -1) continue;
            if(arr[N-j] == -1) continue;
            answer++;
        }
        cout<<answer<<"\n";
    }
}