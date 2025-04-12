#include <iostream>
using namespace std;
int fn(int x, int y){
    int c;
    while(true){
        c = x%y;
        if(c == 0) return y;
        x = y;
        y = c;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, A[500001] = {0, }, X, gcd;
    double answer=0, cnt=0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>A[i];
    }
    cin>>X;
    for(int i=0; i<N; i++){
        gcd = fn(A[i], X);
        if(gcd == 1){
            answer+=A[i];
            cnt++;
        }
    }
    cout.precision(6);
    cout<<fixed;
    cout<<answer/cnt<<"\n";
    return 0;
}