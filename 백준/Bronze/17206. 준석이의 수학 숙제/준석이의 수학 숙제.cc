#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N;
    long long answer = 0;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N;
        answer = 0;
        int three = N/3;
        int seven = N/7;
        int two = N/21;
        answer = 3*(three + 1)*three/2 + 7*(seven+1)*seven/2 - 21*(two+1)*two/2;
        cout<<answer<<"\n";
    }
}