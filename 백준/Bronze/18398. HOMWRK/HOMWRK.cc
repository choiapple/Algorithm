#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long T, N, A, B;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>N;
        for(int j=0; j<N; j++){
            cin>>A>>B;
            cout<<A+B<<" "<<A*B<<"\n";
        }
    }
}