#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, arr[1001] = {0, }, answer = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        arr[tmp]++;
    }
    for(int i=0; i<=1000; i++){
        if(answer < arr[i]) answer = arr[i];
    }
    cout<<answer<<"\n";
    return 0;
}