#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, high = 0, a, b;
    cin>>N;
    while(N--){
        cin>>a>>b;
        high = high + a - b;
        cout<<high<<"\n";
    }
    return 0;
}