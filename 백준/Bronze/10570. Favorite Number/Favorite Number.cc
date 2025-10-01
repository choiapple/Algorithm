#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, V, S, max_n = 0, answer;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>V;
        int arr[1001] = {0, };
        for(int v=0; v<V; v++){
            cin>>S;
            arr[S]++;
        }
        max_n = 0;
        answer = 0;
        for(int i=1; i<=1000; i++){
            if(max_n < arr[i]){
                max_n = arr[i];
                answer = i;
            }
        }
        cout<<answer<<"\n";
    }
    return 0;
}