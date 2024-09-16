#include <iostream>
using namespace std;
int main(){
    long long n, n1, n2, n3;
    cin>>n;
    n2 = 0;
    n3 = 1;
    for(int i=2; i<=n; i++){
        n1 = (n2 + n3)%1000000007;
        n2 = n3;
        n3 = n1;
    }
    if(n == 0){
        cout<<n2<<"\n";
    }else{
        cout<<n3<<"\n";
    }
}