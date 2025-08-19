#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, arr[50000] = {0, }, answer;
    cin>>N;
    for(int i=0; i<N-1; i++){
        cin>>tmp;
        arr[tmp] = 1;
    }
    for(int i=1; i<=N; i++){
        if(arr[i] == 0){
            answer = i;
            break;
        }
    }
    cout<<answer<<"\n";
    return 0;
}