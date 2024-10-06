#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, L, H;
    double arr[100] = {0, }, answer = 0;
    cin>>N>>L>>H;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    sort(arr, arr+N);
    for(int i=L; i<N-H; i++){
        answer += arr[i];
    }
    answer = answer/(N-L-H);
    cout<<fixed;
    cout.precision(15);
    cout<<answer<<"\n";
    return 0;
}