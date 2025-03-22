#include <iostream>
#include <vector>
using namespace std;
bool check(int n, int arr[]){
    bool flag = true;
    for(int i=0; i<n-1; i++){
        if(arr[i] != arr[i+1]){
            flag = false;
        }
    }
    return flag;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, arr[11], answer;
    vector<int> vc;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N;
        for(int n=0; n<N; n++){
            cin>>arr[n];
        }
        answer = 0;
        if(N == 1){
            cout<<answer<<"\n";
            continue;
        }
        for(int n=0; n<N; n++){
            if(arr[n]%2 != 0) arr[n]++;
        }
        while(true){
            if(check(N, arr)) break;
            answer++;
            for(int n=0; n<N; n++){
                arr[n] /= 2;
            }
            int last = arr[N-1];
            for(int n=N-1; n>0; n--){
                arr[n] += arr[n-1];
            }
            arr[0] += last;
            for(int n=0; n<N; n++){
                if(arr[n]%2 != 0) arr[n]++;
            }
        }
        cout<<answer<<"\n";
    }
    return 0;
}