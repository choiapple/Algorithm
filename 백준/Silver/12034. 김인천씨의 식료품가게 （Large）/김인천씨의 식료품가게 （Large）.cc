#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, arr[201] = {0, };;
    cin>>T;
    for(int t=1; t<=T; t++){
        cin>>N;
        int visit[201] = {0, };
        for(int n=0; n<N*2; n++){
            cin>>arr[n];
        }
        for(int n=N*2-1; n>=0; n--){
            if(arr[n]%4 == 0 && visit[n] == 0){
                int k = (arr[n]/4) * 3;
                for(int i=n-1; i>=0; i--){
                    if(k == arr[i] && visit[i] == 0){
                        visit[i] = 1;
                        break;
                    }
                }
            }
        }
        cout<<"Case #"<<t<<": ";
        for(int n=0; n<N*2; n++){
            if(visit[n]) cout<<arr[n]<<" ";
        }
        cout<<"\n";
    }
}