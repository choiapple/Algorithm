#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long A, B, T;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>A>>B;
        cout<<(A/B)*(A/B)<<"\n";
    }
}