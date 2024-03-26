#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, j, max_n=0;
    int arr[100001] = {0, };
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>j;
        max_n = max(max_n, ++arr[j]);
    }
    N = (N+1)/2;
    cout<<(max_n > N ? "NO" : "YES");
    return 0;
}