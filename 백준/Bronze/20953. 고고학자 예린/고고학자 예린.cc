#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, A, B, sum;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>A>>B;
        sum = 0;
        for(int j=0; j<A+B; j++){
            sum += j;
        }
        cout<<sum * (A+B)<<"\n";
    }
}