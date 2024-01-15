#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int U, N;
    string s[100001];
    int arr[100001] = {0, };
    int visit[100001] = {0, };
    cin>>U>>N;
    for(int i=0; i<N; i++){
        cin>>s[i]>>arr[i];
        visit[arr[i]]++;
    }
    int min_n = 100001;
    int tmp = 0;
    for(int i=0; i<N; i++){
        if(visit[arr[i]] < min_n){
            min_n = visit[arr[i]];
            tmp = arr[i];
        }
    }
    for(int i=0; i<N; i++){
        if(min_n == visit[arr[i]] && tmp > arr[i]){
            tmp = arr[i];
        }
    }
    for(int i=0; i<N; i++){
        if(tmp == arr[i]){
            cout<<s[i]<<" "<<arr[i]<<"\n";
            return 0;
        }
    }
}