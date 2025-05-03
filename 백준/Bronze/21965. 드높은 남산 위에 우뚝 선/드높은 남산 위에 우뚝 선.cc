#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, arr[100001] = {0, }, flag = 0, num = 0;
    string answer = "YES";
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
        if(arr[i] > num){
            flag = i;
            num = arr[i];
        }
    }
    for(int i=1; i<=flag; i++){
        if(arr[i-1] < arr[i]) continue;
        answer = "NO";
    }
    for(int i=N-1; i>flag; i--){
        if(arr[i-1] > arr[i]) continue;
        answer = "NO";
    }
    cout<<answer<<"\n";
    return 0;
}