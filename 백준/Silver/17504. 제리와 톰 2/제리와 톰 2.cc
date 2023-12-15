#include <iostream>
using namespace std;
int main(){
    int N;
    long long P, Q;
    int arr[16] = {0, };
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    P = 1;
    Q = arr[N-1];
    for(int i=N-2; i>=0; i--){
        long long tmp = arr[i];
        P += Q*tmp;
        long long mid = P;
        P = Q;
        Q = mid;
    }
   cout<<Q - P<<" "<<Q<<"\n";
}