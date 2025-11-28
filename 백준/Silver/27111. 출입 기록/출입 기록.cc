#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, a, b, arr[200001] = {0, }, answer = 0;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>a>>b;
        if(b == 1){
            if(arr[a] != 0){
                answer++;
            }else{
                arr[a] = 1;
            }
        }else{
            if(arr[a] == 0){
                answer++;
            }else{
                arr[a] = 0;
            }
        }
    }
    for(int i=1; i<=200000; i++){
        if(arr[i] == 1){
            answer++;
        }
    }
    cout<<answer<<"\n";
    return 0;
}