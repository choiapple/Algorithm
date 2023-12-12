#include <iostream>
using namespace std;
int main(){
    int N, L, D;
    cin>>N>>L>>D;
    int tmp = 0;
    int k = 1;
    for(int i=1; i<=N; i++){
        tmp += L;
        if(tmp%D == 0){
            k = tmp/D;
        }else{
            k = tmp/D + 1;
        }
        if(tmp <= D*k && (tmp + 5) > D*k){
            cout<<D*k<<"\n";
            return 0;
        }
        tmp += 5;
    }
    cout<<D*k<<"\n";
}