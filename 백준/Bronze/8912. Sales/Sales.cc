#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, answer = 0;
    cin>>T;
    while(T--){
        cin>>N;
        int arr[1001] = {0, };
        for(int n=0; n<N; n++){
            cin>>arr[n];
        }
        answer = 0;
        for(int n=0; n<N; n++){
            int tmp = 0;
            for(int i=0; i<n; i++){
                if(arr[i] <= arr[n]){
                    tmp++;
                }
            }
            answer+= tmp;
        }
        cout<<answer<<"\n";
    }
}